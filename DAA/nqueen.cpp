// #include<iostream>
// using namespace std;

// class Queen{
//     public:
//     int x[20],count=0;
//     void Nqueen(int r,int n);
//     int place(int r,int c);
//     void display(int n);
// };

// int Queen::place(int r,int c){
//     for(int i=1;i<=r-1;i++){
//         if(x[i]==c){
//             return 0;}
//         else{
//          if(abs(x[i]-c)==abs(i-r)){
//             return 0;
//         }
//         }
//     }
//     return 1;
// }
// void Queen::Nqueen(int r,int n){
//     for(int c=1;c<=n;c++){
//         if(place(r,c)){
//             x[r]=c;
//             if(r==n){
//                 display(n);
//             }
//             else{    
//                 Nqueen(r+1,n);}
//         }
//     }
// }

// void Queen::display(int n){
//     cout<<"\n count"<<++count<<endl;
//     for(int i=1;i<=n;i++){
//         cout<<i<<"\t";
//     }
//     for(int i=1;i<=n;i++){
//         cout<<"\n"<<i<<"\t";
//         for(int j=1;j<=n;j++){
//             if(x[i]==j){
//                 cout<<"Q \t";
//             }
//             else
//                 cout<<"- \t";
//         }
//     }
// }

// int main(){
//     cout<<"Enter NQueen";
//     int n;
//     cin>>n;
//     Queen q;
//     q.Nqueen(1,n);
//     return 0;
// }

#include<iostream>
using namespace std;

class Queen{
    public:
    void nqueen(int r,int n);
    int place(int r,int c);
    void display(int n);
    int x[20],count=0;
};

int Queen::place(int r,int c){
    for(int i=1;i<=r-1;i++){
        if(x[i]==c){
            return 0;
        }else{
            if(abs(x[i]-c)==abs(i-r)){
                return 0;
            }
        }
    }
    return 1;
}

void Queen::nqueen(int r,int n){
    int c,i;
    for(c=1;c<=n;c++){
        cout<<"pratik";
        if(place(r,c)){
            x[r]=c;
            if(r==n){
                display(n);
            }else{
                nqueen(r+1,n);
            }

        }
    }
}

void Queen::display(int n){
    cout<<"\n count"<<++count<<"\t";
    for(int i=1;i<=n;i++){
        cout<<i<<"\t";
    }

    for(int i=1;i<=n;i++){
        cout<<"\n"<<i<<"\t";
        for(int j=1;j<=n;j++){
            if(x[i]==j){
                cout<<"\t"<<"Q";
            }
            else
                cout<<"\t -";
        }
    }
}

int main(){
    cout<<"Enter NQueen";
    int n;
    cin>>n;
    Queen q;
    q.nqueen(1,n);
    return 0;
}