    #include<bits/stdc++.h>
    using namespace std;

    int findk(int k){
    vector<int>a;
    for(int i=1;i<=10001;i++){
            int j= i%10;
        if(i%3!=0 && j!=3 ){
            a.push_back(i);
        }

    }
    return (a[k-1]);
    }
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int k;
            cin>>k;
            cout<<findk(k)<<endl;



        }
    }

