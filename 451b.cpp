#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c=0,m=0;
    bool same=0;
    cin>>n;
    long long ara[n+1];
    vector<long long>v;
    vector<long long>v2,v3,v4;
    for(long long i=0;i<n;i++){
        cin>>ara[i];
            }
            for(long long i=0;i<n;i++){
                v.push_back(ara[i]);
            }
    sort(ara,ara+n);
    for(long long i=0;i<n;i++){
        if(ara[i]!=v[i]){
                same=1;

              v2.push_back(i+1);
              v3.push_back(v[i]);
              v4.push_back(v[i]);

        }
        else if(ara[i]==v[i])c++;
    }
       sort(v3.rbegin(),v3.rend());
       for(long long i=0;i<v3.size();i++){


       if(v3[i]!=v4[i]){
            same=1;
            break;
        }
        else if(v3[i]==v4[i])m++;
       }
         if(v3.size()!=0&&m==v3.size() &&v2[v2.size()-1]-v2[0]+1==v3.size()){
            cout<<"yes"<<endl;
            cout<<v2[0]<<" "<<v2[v2.size()-1]<<endl;
        }
        else if(c==n){
            cout<<"yes"<<endl;
            cout<<"1"<<" "<<"1"<<endl;
        }

        else  cout<<"no"<<endl;



}






























//40
//42131757 49645896 49957344 78716964 120937785 129116222 172128600 211446903 247833196 779340466 717548386 709969818 696716905 636153997 635635467 614115746 609201167 533608141 521874836 273044950 291514539 394083281 399369419 448830087 485128983 487192341 488673105 497678164 501864738 265305156 799595875 831638598 835155840 845617770 847736630 851436542 879757553 885618675 964068808 969215471
