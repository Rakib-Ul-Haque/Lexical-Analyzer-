#include <iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
string keyy[100], ope[100],lope[100],pa[100],pu[100],di[100],ide[100],dire,dele;
int ik=0,io=0,ilo=0,ipa=0,ipu=0, idi=0,ii=0;
//===========================================
//===========================================
bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;

    return true;
}
//=========================================
bool vva(string a)
{
    if (isdigit(a[0]) == false){
            return true;
    }else{
    	return false;
    }
}
bool compare(string a,string b[100],int count){
     for(int i=0;i<count;i++){
         if(b[i]==a){
               return true;
         }
     }
            return false;
}
//===========================================
void Displayi(){
    cout<<"Press 0 to Exit"<<"\n";
    cout<<"Press 1 to Insert"<<"\n";
    cout<<"Press 2 to Search"<<"\n";
    cout<<"Press 3 to Delete"<<"\n";
    cout<<"Press 4 to Show"<<"\n\n";
    cout<<"Enter your Choice: ";
}
//============================================
//============================================
void Showw(){
    cout<<"\nKeywords are :";
    for(int i=0;i<ik;i++){
        cout<<keyy[i]<<" ";
    }
    cout<<"\nOperators are :";
    for(int i=0;i<io;i++){
        cout<<ope[i]<<" ";
    }
    cout<<"\nLogical Operators are :";
    for(int i=0;i<ilo;i++){
        cout<<lope[i]<<" ";
    }
    cout<<"\nParenthesis are :";
    for(int i=0;i<ipa;i++){
        cout<<pa[i]<<" ";
    }
    cout<<"\nPunchuations are :";
    for(int i=0;i<ipu;i++){
        cout<<pu[i]<<" ";
    }
    cout<<"\nDigits are :";
    for(int i=0;i<idi;i++){
        cout<<di[i]<<" ";
    }
    cout<<"\nIdentifiers are :";
    for(int i=0;i<ii;i++){
        cout<<ide[i]<<" ";
    }
    cout<<"\n\n";
}
//=========================================
void searchh(){
    if((compare(dire,keyy,ik))==1){
		cout<<"\nThis keyword is present in the symbol table.\n";
	}else if((compare(dire,ope,io))==1){
	    cout<<"\nThis operator is present in the symbol table.\n";
	}else if((compare(dire,lope,ilo))==1){
	    cout<<"\nThis logicaloperator is present in the symbol table.\n";
	}else if((compare(dire,pa,ipa))==1){
	    cout<<"\nThis Parenthesis is present in the symbol table.\n";
	}else if((compare(dire,pu,ipu))==1){
	    cout<<"\nThis puntuation is present in the symbol table.\n";
	}else if((compare(dire,di,idi))==1){
	    cout<<"\nThis Digit is present in the symbol table.\n";
	}else if((compare(dire,ide,ii))==1){
	    cout<<"\nThis identifire is present in the symbol table.\n";
	}else{
        cout<<"\nThis STRING is not present in the symbol table.\n";
	}
}
//=================delet keyword========================
void deletk(string a){
    // keyword delet
    for(int i=0;i<ik;i++){
        if(keyy[i]==a){
            for(int j=i;j<ik;j++){
                keyy[j]=keyy[j+1];
            }
            ik--;
            break;
        }
    }
    cout<<"A keyword has been deleted\n";
}
//=========================================
//================operator=========================
void deleto(string a){
    for(int i=0;i<io;i++){
        if(ope[i]==a){
            for(int j=i;j<io;j++){
                ope[j]=ope[j+1];
            }
            io--;
            break;
        }
    }
    cout<<"A Operator has been deleted\n";
}
//=========================================
//===============Logical operator==========================
void deletlo(string a){
    for(int i=0;i<ilo;i++){
        if(lope[i]==a){
            for(int j=i;j<ilo;j++){
                lope[j]=lope[j+1];
            }
            ilo--;
            break;
        }
    }
    cout<<"A Logical operator has been deleted\n";
}
//=========================================
//=================parenthesis========================
void deletpa(string a){
    for(int i=0;i<ipa;i++){
        if(pa[i]==a){
            for(int j=i;j<ipa;j++){
                pa[j]=pa[j+1];
            }
            ipa--;
            break;
        }
    }
    cout<<"A Parenthesis has been deleted\n";
}
//=================================================
//=================puntuation========================
void deletpu(string a){
    for(int i=0;i<ipu;i++){
        if(pu[i]==a){
            for(int j=i;j<ipu;j++){
                pu[j]=pu[j+1];
            }
            ipu--;
            break;
        }
    }
    cout<<"A Puntuation has been deleted\n";
}
//=================================================
//=================digit========================
void deletdi(string a){
    for(int i=0;i<idi;i++){
        if(di[i]==a){
            for(int j=i;j<idi;j++){
                di[j]=di[j+1];
            }
            idi--;
            break;
        }
    }
    cout<<"A Digit has been deleted\n";
}
//=================================================
//=================identifier========================
void deletide(string a){
    for(int i=0;i<ii;i++){
        if(ide[i]==a){
            for(int j=i;j<ii;j++){
                ide[j]=ide[j+1];
            }
            ii--;
            break;
        }
    }
    cout<<"A Identifier has been deleted\n";
}
//===================Delete==============================
void Deletee(){
     if((compare(dele,keyy,ik))==1){
		deletk(dele);
	}else if((compare(dele,ope,io))==1){
	    deleto(dele);
	}else if((compare(dele,lope,ilo))==1){
	    deletlo(dele);
	}else if((compare(dele,pa,ipa))==1){
	    deletpa(dele);
	}else if((compare(dele,pu,ipu))==1){
	    deletpu(dele);
	}else if((compare(dele,di,idi))==1){
	    deletdi(dele);
	}else if((compare(dele,ide,ii))==1){
	    deletide(dele);
	}else{
        cout<<"\nThis STRING is not present in the symbol table.\n";
	}
}
//=========================================
int main()
{
    char choice;  
    //=============
    char s1[100];
	char *ck[100][100];
	char *cid[100][100];
    char *token;
    int iden=0, checkid=0;
    //=============
    for(;;){
        Displayi();
        cin>>choice;
        if(choice=='0'){
            break;
        }else if(choice=='1'){
            //===================================
            cin>>s1;
            token=strtok(s1," ");
            while( token != NULL ) {
            if (strcmp (token,"int") == 0 || strcmp (token,"float") == 0 || strcmp (token,"double") == 0 || strcmp (token,"char") == 0 || strcmp (token,"if") == 0 || strcmp (token,"else") == 0 || strcmp (token,"else if") == 0 || strcmp (token,"switch") == 0 || strcmp (token,"case") == 0 || strcmp (token,"break") == 0){
					    
					        if((compare(token,keyy,ik))==1){
					            break;
					        }else{
					            keyy[ik]=token;
				                ik++;
					        }
			}
            else if (strcmp (token,"+") == 0 || strcmp (token,"-") == 0 || strcmp (token,"/") == 0 || strcmp (token,"*") == 0 || strcmp (token,"=") == 0 || strcmp (token,"%") == 0){
                            if((compare(token,ope,io))==1){
					            break;
					        }else{
					            ope[io]=token;
                                io++;
					        }
            }
            else if (strcmp (token,">") == 0 || strcmp (token,">=") == 0 || strcmp (token,"<") == 0 || strcmp (token,"<=") == 0 || strcmp (token,"==") == 0 || strcmp (token,"!=") == 0){
                            if((compare(token,lope,ilo))==1){
					            break;
					       }
                        else {
                            lope[ilo]=token;
                            ilo++;
                        }
            }
            else if (strcmp (token,"(") == 0 || strcmp (token,"{") == 0 || strcmp (token,"[") == 0 || strcmp (token,")") == 0 || strcmp (token,"}") == 0 ||strcmp (token,"]") == 0 ){
                if((compare(token,pa,ipa))==1){
				    break;
			    }
                else {
                    pa[ipa]=token;
                    ipa++;
                }
            }
            else if (strcmp (token,":") == 0 || strcmp (token,",") == 0 || strcmp (token,";") == 0 ){
                     if((compare(token,pu,ipu))==1){
					    break;
					}
                    else{
                        pu[ipu]=token;
                        ipu++;
                    }
            }
            else if(isNumber(token)){
    	        if((compare(token,di,idi))==1){
				    break;
				}
                else {
    	            di[idi]=token;
    	            idi++;
                }
            }else{
    		    if(vva(token)){
    		 	    cid[iden][iden]=token;
				    for(int j=0;j<iden;j++){
					    if((strcmp(ck[iden][iden],ck[j][j]))==0){
						    checkid++;
					    }
				    } 
				    if((compare(token,ide,ii))==1){
					   break;
					}
                    else{
			  	        ide[ii]=token;
			  	        ii++;
                    }
    	  	    }else{
    		      //  widen++;
        	  	}
            }
            token = strtok(NULL," ");
            }
            //===================================
        }else if(choice=='2'){
            cout<<"Put the string you want to search: ";
            cin>>dire;
            searchh();
        }else if(choice=='3'){
            cout<<"Put the string you want to Delete: ";
            cin>>dele;
            Deletee();
        }else if(choice=='4'){
            Showw();
        }else{
            cout<<"\nplz enter valid option.\n";
        }
    }
    return 0;
}
