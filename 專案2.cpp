#include <iostream>
using namespace std;

struct Contact {
    string name;
    string call;
    string gmail;
};//定義結構(名字、電話、電子郵件)

int main() {
    Contact list[100];//目前僅有100個陣列
    int count = 0;
    int choice;
    cout<<"1.AddSomeone 2.List 3.Check 4.Leave"<<endl;

    while(cin>>choice){
        if(choice==4){
            break;//跳脫迴圈(離開)
        }
        else if(choice==1){//功能1:新增
            int n=0;
            cout<<"Number_of_people:"<<endl;
            cin>>n;
            if (count + n > 100) {
                cout << "Too many contacts! Max is 100.\n";
                continue;
            }//檢查是否超過陣列
            for(int i=0;i<n;i++){
                cout<<"Name:"<<endl;
                cin>>list[count].name;
                cout<<"Call:"<<endl;
                cin>>list[count].call;
                cout<<"Gmail:"<<endl;
                cin>>list[count].gmail;//資料填入
                count++;
                cout<<"Contacts list with new members "<<count<<" and Max is 100"<<endl;//告知已新增數量
            }
            cout<<"1.AddSomeone 2.List 3.Check 4.Leave"<<endl;
        }

        else if(choice==2){//功能2:列出
            if(count==0){
                cout<<"Contacts is empty"<<endl;
            }
            else{
                for(int i=0;i<count;i++){
                    cout<<i+1<<" "<<list[i].name<<" "<<list[i].call<<" "<<list[i].gmail<<endl;
                }//用迴圈依序列出
            }
            cout<<"1.AddSomeone 2.List 3.Check 4.Leave"<<endl;
        }
        else if(choice==3){//功能3:查詢
            string FindName;
            string FindCall;
            string FindGmail;
            int k=0;
            cout<<"From? "<<"1.Name 2.Call 3.Gmail"<<endl;//查詢方式
            cin>>k;
            if(k==1){//依查詢方式列出目標人物 //方法1:名字
                cout<<"Enter Name:";
                cin>>FindName;
                for(int i=0;i<count;i++){
                    if(list[i].name==FindName){
                        cout<< <<"call: "list[i].call << " gmail:" << list[i].gmail << endl;
                        cout<<"1.AddSomeone 2.List 3.Check 4.Leave"<<endl;
                    }
                }
        }
        else if(k==2){//方法2:電話
            cout<<"Enter Call:";
            cin>>FindCall;
            for(int i=0;i<count;i++){
                if(list[i].call==FindCall){
                    cout<<"name: "<< list[i].name << " gmail:" << list[i].gmail << endl;
                    cout<<"1.AddSomeone 2.List 3.Check 4.Leave"<<endl;
                }
            }

        }
        else if(k==3){//方法3:電子郵件
            cout<<"Enter Gmail:";
                cin>>FindGmail;
                for(int i=0;i<count;i++){
                    if(list[i].gmail==FindGmail){
                        cout<<"name: "<<list[i].name << " call" << list[i].call << endl;
                        cout<<"1.AddSomeone 2.List 3.Check 4.Leave"<<endl;
                    }
                }
        }
        else{//防呆機制，重新倒回最初(新增人選那邊)的選擇
            cout<<"Invalid choice! Try again."<<endl<<"1.AddSomeone 2.List 3.Check 4.Leave"<<endl;
        }
        }
    }
}
