# include<stdio.h>
int main()
{
    int phy,ch, maths, hindi,english;
    int z,t,per;
    printf(" enter a marks physics");
    scanf("%d",&phy);

    if(phy<0 || phy>100){
        printf("invalid input \n");
        return 0;
    }

    printf(" enter a marks chemistry");
    scanf("%d",&ch);
    
    if(ch<0 || ch>100){
        printf("invalid input \n");
        return 0;
    }

    printf(" enter a marks maths");
    scanf("%d",&maths);

    if(maths<0 || maths>100){
        printf("invalid input \n");
        return 0;
    }

    printf(" enter a marks hindi");
    scanf("%d",&hindi);

    if(hindi<0 || hindi>100){
        printf("invalid input \n");
        return 0;
    }


    printf(" enter a marks english");
    scanf("%d",&english);
    
    if(english<0 || english>100){
        printf("invalid input \n");
        return 0;
    }
    z=0;
    if(phy<33){
        z++;
    }
    if(ch<33){
        z++;
    }
    if(maths<33){
        z++;
    }
    if(hindi<33){
        z++;
    }
    if(english<33){
        z++;
    }
    if(z==0){
        printf(" RESULT : PASS\n");
        t=phy+ch+maths+hindi+english;
        per = t/5;
        printf(" total : %d \n",t);
        printf(" percentage : %d \n",per);

        if(per>=60){
            printf("first division \n");
        }
        if(per>=45 && per<60){
            printf(" secound division \n");
        }
        if(per<45){
            printf(" third division \n");
    }
        else{
            if(z==1)
            {
                printf("RESULT : Compartment \n");
            }
            else{
                printf("RESULT : FAILL \n");
            }
        }
        return 0;
    }
}
