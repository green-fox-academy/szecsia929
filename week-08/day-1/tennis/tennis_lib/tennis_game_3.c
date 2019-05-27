#include "tennis_game_3.h"
#include <string.h>
#include <stdlib.h>

tennis_game_3_t create_tennis_game_3(const char *p1n, const char *p2n)
{
    tennis_game_3_t result = {0, 0, calloc(16, sizeof(char)), calloc(16, sizeof(char))};
    strcpy(result.player_one_name, p1n);
    strcpy(result.player_two_name, p2n);
    return result;
}

void won_point_3(tennis_game_3_t *tg, const char *pn)
{
    strcmp(pn, "player1") ? tg->player2_points++ : tg->player1_points++;
}

const char * get_score_3(tennis_game_3_t *tennis_game)
{
    char *s;

    if (tennis_game->player1_points < 4 && tennis_game->player2_points < 4) {
        static const char *p[] = {"Love", "Fifteen", "Thirty", "Forty"};
        char ts[20];
        strcpy(ts, p[tennis_game->player1_points]);
        if (tennis_game->player1_points == tennis_game->player2_points) {
            strcat(ts, "-All");
        } else {
            strcat(ts, "-");
            strcat(ts, p[tennis_game->player2_points]);
        }
        s = calloc(strlen(ts) + 1, sizeof(char));
        strcpy(s, ts);
        return s;
    } else {
        if (tennis_game->player1_points == tennis_game->player2_points)
            return "Deuce";

        char ts[20];
        (tennis_game->player1_points > tennis_game->player2_points) ? strcpy(ts, tennis_game->player_one_name) : strcpy(ts, tennis_game->player_two_name);

        char ts2[15];
        ((tennis_game->player1_points - tennis_game->player2_points) * (tennis_game->player1_points - tennis_game->player2_points) == 1) ? strcpy(ts2, "Advantage ") : strcpy(ts2, "Win for ");

        s = calloc(strlen(ts) + strlen(ts2) + 1, sizeof(char));
        strcpy(s, ts2);
        strcat(s, ts);
        return s;
    }
}