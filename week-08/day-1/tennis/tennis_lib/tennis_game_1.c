#include "tennis_game_1.h"
#include <string.h>
#include <stdlib.h>

tennis_game_1_t create_tennis_game_1(const char *player1_name, const char *player2_name)
{
    tennis_game_1_t result;

    result.player1_name = player1_name;
    result.player2_name = player2_name;
    result.player1_score = 0;
    result.player2_score = 0;

    return result;
}

void won_point_1(tennis_game_1_t *tennis_game, const char *player_name)
{
    if (player_name == tennis_game->player1_name) {
        tennis_game->player1_score += 1;
    } else {
        tennis_game->player2_score += 1;
    }
}

char *get_score_1(tennis_game_1_t *tennis_game)
{
    char *score = calloc(18, sizeof(char));
    int tempScore = 0;
    if (tennis_game->player1_score == tennis_game->player2_score) {
        switch (tennis_game->player1_score) {
            case 0:
                strcat(score, "Love-All");
                break;
            case 1:
                strcat(score, "Fifteen-All");
                break;
            case 2:
                strcat(score, "Thirty-All");
                break;
            case 3:
                strcat(score, "Forty-All");
                break;
            default:
                strcat(score, "Deuce");
                break;

        }
    } else if (tennis_game->player1_score >= 4 || tennis_game->player2_score >= 4) {
        int minusResult = tennis_game->player1_score - tennis_game->player2_score;
        if (minusResult == 1) strcat(score, "Advantage player1");
        else if (minusResult == -1) strcat(score, "Advantage player2");
        else if (minusResult >= 2) strcat(score, "Win for player1");
        else strcat(score, "Win for player2");
    } else {
        for (int i = 1; i < 3; i++) {
            if (i == 1) tempScore = tennis_game->player1_score;
            else {
                strcat(score, "-");
                tempScore = tennis_game->player2_score;
            }
            switch (tempScore) {
                case 0:
                    strcat(score, "Love");
                    break;
                case 1:
                    strcat(score, "Fifteen");
                    break;
                case 2:
                    strcat(score, "Thirty");
                    break;
                case 3:
                    strcat(score, "Forty");
                    break;
            }
        }
    }
    return score;
}