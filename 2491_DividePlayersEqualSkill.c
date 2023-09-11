/**
 * @author Blake Freer
 * @date 2023-09-11
**/

long long dividePlayers(int* skill, int skillSize){
    // Find total skill
    int skillSum = 0;
    for(int i = 0; i < skillSize; i++){
        skillSum += skill[i];
    }
    // If skill cannot be divided evenly, return -1
    if(skillSum % (skillSize>>1) != 0){
        return -1;
    }
    // Calculate skill that each team will have
    int teamSkill = skillSum / (skillSize>>1);

    // Track the number of players with each skill
    int* players = calloc(1001, sizeof(int));
    int self;
    int partner;

    long long chemistry = 0;
    // For each player, add 1 to players[skill[i]]
    // and subtract 1 from players[teamSkill-skill[i]]
    for(int i = 0; i < skillSize; i++){
        self = skill[i];
        partner = teamSkill-self;
        players[self] += 1;
        players[partner] -= 1;
        chemistry += self * partner;
    }
    // If any skill number is non zero, then there is a player without the matching partner
    for(int i = 1; i < 1001; i++){
        if(players[i] != 0){
            return -1;
        }
    }
    // Chemistry was counted for both team members, so must be divided by 2
    return chemistry / 2;
}