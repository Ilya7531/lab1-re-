#include <iostream>

using namespace std;
class Phone
{
    char LastName[30];
    char FirstName[30];
    char SecondName[30];
    char Adress[30];
    int Number;
    int GorodTime;
    int MezhdTime;
public:
    Phone();
    void show();
    int gettime();
    int getmezhdtime();
    char *getname();
    void sortbyname();
};
Phone::Phone()
{
    cout<<"Input Last Name:";
    cin>>LastName;
    cout<<"Input First Name:";
    cin>>FirstName;
    cout<<"Input Second Name:";
    cin>>SecondName;
    cout<<"Input Adress:";
    cin>> Adress;
    cout<<"Input Number:";
    cin>>Number;
    cout<<"Input Gorod:";
    cin>>GorodTime;
    cout<<"Input Mezhd:";
    cin>>MezhdTime;
}
void Phone::show()
{
    cout<<"=============================="<<endl;
    cout<<"LastName:"<< LastName <<endl;
    cout<<"FirstName:"<< FirstName <<endl;
    cout<<"SecondName:"<< SecondName <<endl;
    cout<<"Adress:"<< Adress <<endl;
    cout<<"Number:"<< Number <<endl;
    cout<<"Gorod:"<< GorodTime <<endl;
    cout<<"Mezhd:"<< MezhdTime <<endl;
}
int Phone::gettime()
{
    return GorodTime;
}
int Phone::getmezhdtime()
{
    return MezhdTime;
}
char *Phone::getname()
{
    return LastName;
}
void abonmaxtime(Phone spis[],int kol)
{
    int maxtime;
    cout<<"Input max of value of talking:";
    cin>>maxtime;
    for(int i=0; i<kol; i++)
    {
        if(spis[i].gettime()>maxtime)
        {
            spis[i].show();
            cout<<endl;
        }
    }

}
void polzovanie(Phone spis[],int kol)
{
    cout<<"People, who used mezhtime:\n";
    for(int i=0; i<kol; i++)
    {
        if(spis[i].getmezhdtime()!=0)
        {
            spis[i].show();
        }
    }
}
void sortbyname(Phone spis[],int kol)
{
    cout<<"Svedenia v alph poradke:\n";
    for(int i=0; i<kol; i++)
    {
        for(int j=0; j<kol/2; j++)
        {
            if(spis[j].getname()[0]<spis[j+1].getname()[0])
            {
                Phone tmp=spis[j];
                spis[j]=spis[j+1];
                spis[j+1]=tmp;
            }
        }
    }

}
int main()
{
    Phone *spis;
    int kol;
    cout<<"Number of people:";
    cin>>kol;
    spis=new Phone[kol];
    for(int i=0; i<kol; i++)
    {
        spis[i].show();
    }
    abonmaxtime(spis,kol);
    polzovanie(spis,kol);
    sortbyname(spis,kol);
    for(int i=0; i<kol; i++)
    {
        spis[i].show();
    }
    delete [] spis;
    return 0;
}
