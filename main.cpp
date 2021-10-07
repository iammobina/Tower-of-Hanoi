# include <stdio.h>
# include <stdbool.h>
# include <iostream>

using namespace std;

int shomareshemarahel(int array[], int tedadeazayevorudi)
{
        int counter = 0, i;
        for (i = 1; i <= tedadeazayevorudi; i++)
        if (array[i] == 3)
        counter++;
        return counter;
}
int main()
{
    int tedadehalghe, i, harekat, shomaresheharekat = 0;
    bool harekatedg = false;
    int azmileye, bemileye, halghe;
    int topDisk[4];
    int temp;
    cout << "tedade halghe ra vared konid :"<<endl;
    cin >> tedadehalghe;
    
    int mile[tedadehalghe + 1];
    for (i = 1; i <= tedadehalghe; ++i)
            mile[i] = 1;
    if ((tedadehalghe & 1) == 0)
            harekat = 1;
    else
            harekat = -1;

    cout << "rahe hal baraye borje hanoy :" << endl;
        do
        {
            shomaresheharekat++;
            if (!harekatedg)
            {
                azmileye = mile[1];
                bemileye = azmileye + harekat;
                if (bemileye > 3)
                    bemileye = 1;
                if (bemileye < 1)
                    bemileye = 3;
                    
                halghe = 1;
            }
            else
            {
                for (i = 1; i <= 3; i++)
                    topDisk[i] = tedadehalghe + 1;
                for (i = tedadehalghe; i >= 1; i--)
                    topDisk[mile[i]] = i;
                    
                switch (mile[1])
                {
                    case 1:
                        azmileye = 2;
                        bemileye = 3;
                        break;
                    case 2:
                        azmileye = 1;
                        bemileye = 3;
                        break;
                    case 3:
                        azmileye = 1;
                        bemileye = 2;
                        break;
                    default:
                        printf("error");
                        break;
                }
                if (topDisk[azmileye] > topDisk[bemileye])
                {               
                    temp = azmileye;
                    azmileye = bemileye;
                    bemileye = temp;
                }

                halghe = topDisk[azmileye];
                }

           printf("%i: halgheye %i az mileye %c be mileye %c\n", shomaresheharekat, halghe,azmileye + 64, bemileye + 64);
           mile[halghe] = bemileye;
           harekatedg = !harekatedg;
        }
        while (shomareshemarahel(mile, tedadehalghe) != tedadehalghe);
        system("PAUSE");
        return 0;
}
