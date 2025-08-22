#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {
    int c,t;
    
    //Channels.
    printf("1.The Daily Star\n");
    printf("2.Al Jazeera\n");
    printf("3.BBC\n");
    printf("4.CNN\n");
    printf("5.Prothom Alo\n");
    printf("6.Dhaka Tribune\n");
    printf("7.Daily Sun\n");
    printf("8.The Guardian\n");
    printf("9.The Times Of India\n");
    printf("Choose your news channel: ");
    scanf("%d",&c);

    //Topics
    printf("1.Tech & Science\n");
    printf("2.Business\n");
    printf("3.Sports\n");
    printf("4.Health\n");
    printf("5.Entertainment\n");
    printf("Choose your topic: ");
    scanf("%d",&t);


    char string[10][6][100];
    //The Daily Star.
    strcpy(string[1][1], "https://www.thedailystar.net/tech-startup");
    strcpy(string[1][2], "https://www.thedailystar.net/business");
    strcpy(string[1][3], "https://www.thedailystar.net/sports");
    strcpy(string[1][4], "https://www.thedailystar.net/life-living");
    strcpy(string[1][5], "https://www.thedailystar.net/entertainment");

    //Al Jazeera.
    strcpy(string[2][1], "https://www.aljazeera.com/tag/science-and-technology/");
    strcpy(string[2][2], "https://www.aljazeera.com/economy/");
    strcpy(string[2][3], "https://www.aljazeera.com/sports/");
    strcpy(string[2][4], "https://www.aljazeera.com/tag/health/");
    strcpy(string[2][5], "https://www.aljazeera.com/tag/entertainment/");

    //BBC.
    strcpy(string[3][1], "https://www.bbc.com/innovation/technology");
    strcpy(string[3][2], "https://www.bbc.com/business");
    strcpy(string[3][3], "https://www.bbc.com/sport");
    strcpy(string[3][4], "https://www.bbc.com/news/health");
    strcpy(string[3][5], "https://www.bbc.com/culture/entertainment-news");

    //CNN.
    strcpy(string[4][1], "https://edition.cnn.com/science");
    strcpy(string[4][2], "https://edition.cnn.com/business");
    strcpy(string[4][3], "https://edition.cnn.com/sport");
    strcpy(string[4][4], "https://edition.cnn.com/health");
    strcpy(string[4][5], "https://edition.cnn.com/entertainment");

    //Prothomalo
    strcpy(string[5][1], "https://en.prothomalo.com/science-technology");
    strcpy(string[5][2], "https://en.prothomalo.com/business");
    strcpy(string[5][3], "https://en.prothomalo.com/sports");
    strcpy(string[5][4], "https://en.prothomalo.com/topic/Health");
    strcpy(string[5][5], "https://en.prothomalo.com/entertainment");
    
    //Dhaka Tribune.
    strcpy(string[6][1], "https://www.dhakatribune.com/science-technology-environment");
    strcpy(string[6][2], "https://www.dhakatribune.com/business");
    strcpy(string[6][3], "https://www.dhakatribune.com/sport");
    strcpy(string[6][4], "https://www.dhakatribune.com/bangladesh/health");
    strcpy(string[6][5], "https://www.dhakatribune.com/entertainment");

    //Daily Sun.
    strcpy(string[7][1], "https://www.daily-sun.com/online/sci-tech");
    strcpy(string[7][2], "https://www.daily-sun.com/online/economy");
    strcpy(string[7][3], "https://www.daily-sun.com/online/sports");
    strcpy(string[7][4], "https://www.daily-sun.com/online/health");
    strcpy(string[7][5], "https://www.daily-sun.com/online/entertainment");

    //The Guardian
    strcpy(string[8][1], "https://www.theguardian.com/science");
    strcpy(string[8][2], "https://www.theguardian.com/uk/business");
    strcpy(string[8][3], "https://www.theguardian.com/uk/sport");
    strcpy(string[8][4], "https://www.theguardian.com/lifeandstyle/health-and-wellbeing");
    strcpy(string[8][5], "https://www.theguardian.com/us/culture");

    //The Times Of India
    strcpy(string[9][1], "https://timesofindia.indiatimes.com/technology");
    strcpy(string[9][2], "https://timesofindia.indiatimes.com/business");
    strcpy(string[9][3], "https://timesofindia.indiatimes.com/sports");
    strcpy(string[9][4], "https://timesofindia.indiatimes.com/life-style");
    strcpy(string[9][5], "https://timesofindia.indiatimes.com/etimes");

    //Launching the URL
    char url[100];
    strcpy(url, string[c][t]);
    char command[256];
    sprintf(command, "start %s", url);
    system(command);

    return 0;
}
