#include <iostream>

using namespace std;

int Longitud(char *cadena)
{
    int i=0;
    while (*(cadena + i)!='\0')
    {
        i=i+1;
    }
    return i;
}

void myStrCopy(char *cad1, char *cad2)
{
    int i=0;

    while (*(cad2 + i)!='\0')
    {
        *(cad1 + i)=*(cad2 + i);
        i++;
    }

    if(i!=Longitud(cad1))
        *(cad1 + i)='\0';
}

int main()
{
    char a[100]="ana";
    char b[100]="luisangel";
    cout<<Longitud(a)<<endl;
    cout<<a<<endl;
    myStrCopy(a,b);
    cout<<a<<endl;

    return 0;

}
