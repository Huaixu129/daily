#include <stdio.h>
struct Students
{
    int answer[100];
    int score;
};
int main()
{
    int N, M;
    scanf("%d%d", &N, &M);
    int Maxscore[100];
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &Maxscore[i]);
    }
    int correctAnswer[100];
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &correctAnswer[i]);
    }
    struct Students students[100];
    for (int i=0;i<N;i++){
        students[i].score=0;
        for (int j=0;j<M;j++){
            scanf("%d",&students[i].answer[j]);
                if(students[i].answer[j]==correctAnswer[j])
                students[i].score+=Maxscore[j];
        }
    }    
    for (int i=0;i<N;i++){
        printf("%d\n",students[i].score);
    }
    return 0;
}