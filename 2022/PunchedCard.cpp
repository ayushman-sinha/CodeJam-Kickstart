#include <bits/stdc++.h>
using namespace std;
void calc(int a,int b){
    vector<string>ans;
    for(int i=0;i<a;i++){
        string tmp="+-",w="";
        for(int i=0;i<b;i++)
          w+=tmp;
          w.push_back('+');
          ans.push_back(w);
          tmp="|.",w="";
        for(int i=0;i<b;i++)
          w+=tmp;
          w.push_back('|');
          ans.push_back(w);
    }
    string tmp="+-",w="";
          for(int i=0;i<b;i++)
          w+=tmp;
          w.push_back('+');          
          ans.push_back(w);
          ans[0][0]='.',ans[0][1]='.',ans[1][0]='.',ans[1][1]='.';
          for(auto i:ans)
          cout<<i<<"\n";

}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        cout<<"Case #"<<i<<":\n";
        calc(a,b);
    }
}