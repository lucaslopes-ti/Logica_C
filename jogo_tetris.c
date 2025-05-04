#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <time.h>
#include <unistd.h>

#define WIDTH 10
#define HEIGHT 20

int field[HEIGHT][WIDTH];

typedef struct {
    int x, y, shape, rotation;
} Piece;

int shapes[7][4][4][4] = {
    // I
    {
        {{0,1,0,0},
         {0,1,0,0},
         {0,1,0,0},
         {0,1,0,0}},

        {{0,0,0,0},
         {1,1,1,1},
         {0,0,0,0},
         {0,0,0,0}},

        {{0,1,0,0},
         {0,1,0,0},
         {0,1,0,0},
         {0,1,0,0}},

        {{0,0,0,0},
         {1,1,1,1},
         {0,0,0,0},
         {0,0,0,0}}
    },

    // O
    {
        {{0,0,0,0},
         {0,1,1,0},
         {0,1,1,0},
         {0,0,0,0}},

        {{0,0,0,0},
         {0,1,1,0},
         {0,1,1,0},
         {0,0,0,0}},

        {{0,0,0,0},
         {0,1,1,0},
         {0,1,1,0},
         {0,0,0,0}},

        {{0,0,0,0},
         {0,1,1,0},
         {0,1,1,0},
         {0,0,0,0}}
    }
    // (Adicione as outras peças se quiser)
};

void draw_field() {
    for (int y = 0; y < HEIGHT; y++) {
        move(y, 0);
        for (int x = 0; x < WIDTH; x++) {
            printw(field[y][x] ? "#" : ".");
        }
    }
}

int check_collision(Piece *p) {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (shapes[p->shape][p->rotation][i][j])
                if (p->y+i >= HEIGHT || p->x+j < 0 || p->x+j >= WIDTH || field[p->y+i][p->x+j])
                    return 1;
    return 0;
}

void place_piece(Piece *p) {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (shapes[p->shape][p->rotation][i][j])
                field[p->y+i][p->x+j] = 1;
}

void remove_lines() {
    for (int i = HEIGHT-1; i >= 0; i--) {
        int full = 1;
        for (int j = 0; j < WIDTH; j++) {
            if (!field[i][j]) {
                full = 0;
                break;
            }
        }
        if (full) {
            for (int k = i; k > 0; k--)
                for (int j = 0; j < WIDTH; j++)
                    field[k][j] = field[k-1][j];
            for (int j = 0; j < WIDTH; j++)
                field[0][j] = 0;
            i++;
        }
    }
}

int main() {
    initscr();
    noecho();
    curs_set(FALSE);
    nodelay(stdscr, TRUE);
    keypad(stdscr, TRUE);

    srand(time(NULL));
    Piece p = {3, 0, rand() % 2, 0}; // I ou O

    while (1) {
        erase();
        draw_field();

        // desenha peça
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                if (shapes[p.shape][p.rotation][i][j])
                    mvprintw(p.y + i, p.x + j, "#");

        refresh();

        int ch = getch();
        Piece temp = p;

        if (ch == KEY_LEFT) temp.x--;
        if (ch == KEY_RIGHT) temp.x++;
        if (ch == KEY_DOWN) temp.y++;
        if (ch == 'z') temp.rotation = (temp.rotation + 1) % 4;

        if (!check_collision(&temp)) p = temp;
        else if (ch == KEY_DOWN) {
            place_piece(&p);
            remove_lines();
            p = (Piece){3, 0, rand() % 2, 0};
            if (check_collision(&p)) break; // Game over
        }

        usleep(300000); // velocidade
        p.y++;
        if (check_collision(&p)) {
            p.y--;
            place_piece(&p);
            remove_lines();
            p = (Piece){3, 0, rand() % 2, 0};
            if (check_collision(&p)) break; // Game over
        }
    }

    endwin();
    printf("Game Over!\n");
    return 0;
}
