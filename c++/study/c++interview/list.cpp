#include <list>
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int id1, id2, num, n;
    char str[10];
    map<int ,list<int>> ml;
    cin >> n;
    while (n--)
    {
        cin >> str;
        switch (str[0])
        {
        case 'n':
            cin >> id1;
            ml[id1] = list<int>();
            break;
        case 'a':
            cin >> id1 >> num;
            ml[id1].push_back(num);
            break;
        case 'm':
            cin >> id1 >> id2;
            ml[id1].merge(ml[id2]);
            break;

        case 'u':
            cin >> id1;
            ml[id1].sort();
            ml[id1].unique();
            break;

        case 'o':
            cin >> id1;
            ml[id1].sort();
            for (auto iter = ml[id1].begin(); iter != ml[id1].end(); ++iter)
			{
				cout << *iter << " ";
			}
			cout << endl;
			break;
    }
    
}
}