#include<bits/stdc++.h>

using namespace std;

int main()

{

    int t;
    cin>>t;

    while(t--){
        int x0,x1,x2,y0,y1,y2,m=0,sum=0;
        cin>>x0>>x1>>x2>>y0>>y1>>y2;


        m=min(x0,y2);
        x0-=m;
        y2-=m;
        cout<<m<<endl;

        m=min(x1,y0);
        x1-=m;
        y0-=m;
        cout<<m<<endl;

        m=min(x2,y1);
        x2-=m;
        y1-=m;
        sum+=2*m;
        cout<<m<<endl;
            sum-=2*min(y2,x1);
            cout<<sum<<endl;
            cout<<m<<endl;

        }



    return 0;
}
/*/
#include<bits/stdc++.h>

#define endl '\n'

using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;

    cin >> t;
    for(;t--;)
    {
	int m, sum = 0, x0, x1, x2, y0, y1, y2;

	cin >> x0 >> x1 >> x2 >> y0 >> y1 >> y2;

	m = min(x0, y2);
	x0 -= m;
	y2 -= m;

	m = min(x1, y0);
	x1 -= m;
	y0 -= m;

	m = min(x2, y1);
	x2 -= m;
	y1 -= m;
	sum += 2 * m;

	sum -= 2 * min(x1, y2);

	cout << sum << endl;
    }
}
/*/
