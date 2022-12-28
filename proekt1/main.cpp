/*#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    a += b;
    cout << a;
}*/


/*#include <iostream>
using namespace std;
int main ()
{
    int a = 5;
    int b = 5;
    cout << a + b;
}
*/

#include <stdio.h>
using namespace std;
int main ()
{
    FILE *file1;
    int a = 0;
    char s[400];
    file1 = fopen ("file1.txt", "r");
    while (~fscanf (file1, "%s", &s) == 1)
    {
        printf ("%s", s);
    }
    fclose(file1);
}

/*#include  <iostream>
#include <string>
using namespace std;
int main ()
{
    int a = 1;
    string s;
    cin >> s;
    if (s == '_')
    {
        a++;
    }
    cout << a;
}*/
