// ETHEREUM PROJECT 
// CHECK YP FORMULATIONS: EQUATIONS 120-124
// CONCERN D IS INCLUDED IN Y?

// to compile 
 /* g++ -Wl,--no-as-needed -std=c++11 -pthread -o YP_JumpDest_YD_ YP_JumpDest_YD_.cc */

#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

    using namespace std;

int main()
{

vector<string> OPCODES={"CALLDATASIZE","PUSH1","0x00","DUP1","CALLDATACOPY","JUMPDEST","PUSH1" ,"0x20","PUSH1","0x00","CALLDATASIZE"
,"PUSH1","0x00","CALLVALUE","PUSH20","0xd6","58","a4","b8","24","7c","14","86","8f","3c","51","2f","a5","cb","b6","e4","58","e4","a9"
,"89","PUSH2","0x23","5a","GAS","SUB","CALLCODE","PUSH1","0x20","PUSH1","0x00","RETURN","JUMP","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST",
"PUSH8","0x60" ,"0x60" ,"0x60" ,"0x60","0x60","0x60" ,"0x60","0x60","JUMPDEST","PUSH4","0x60" ,"0x60" ,"0x60" ,"0x60"
,"PUSH1","0x60","PUSH4","0x60" ,"0x60" ,"0x60" ,"0x60","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0"
,"PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP"
,"JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","JUMPDEST"
,"JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE"
,"POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1"
,"SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1"
,"SSTORE","POP","JUMPDEST","PUSH4","0x60" ,"0x60" ,"0x60" ,"0x60" ,"JUMPDEST","JUMPDEST"
,"JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","PUSH8","0x60" ,"0x60" ,"0x60" ,"0x60","0x60","0x60" ,"0x60","0x60","STOP","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST",
"PUSH8","0x60" ,"0x60" ,"0x60" ,"0x60","0x60","0x60" ,"0x60","0x60","JUMPDEST","PUSH4","0x60" ,"0x60" ,"0x60" ,"0x60"
,"PUSH1","0x60","PUSH4","0x60" ,"0x60" ,"0x60" ,"0x60","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0"
,"PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP"
,"JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","JUMPDEST"
,"JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE"
,"POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1"
,"SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1"
,"SSTORE","POP","JUMPDEST","PUSH4","0x60" ,"0x60" ,"0x60" ,"0x60" ,"JUMPDEST","JUMPDEST"
,"JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","PUSH8","0x60" ,"0x60" ,"0x60" 
,"0x60","0x60","0x60" ,"0x60","0x60","STOP","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST"
,"JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST",
"JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST",
"PUSH8","0x60" ,"0x60" ,"0x60" ,"0x60","0x60","0x60" ,"0x60","0x60","JUMPDEST","PUSH4","0x60" ,"0x60" ,"0x60" ,"0x60"
,"PUSH1","0x60","PUSH4","0x60" ,"0x60" ,"0x60" ,"0x60","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0"
,"PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP"
,"JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","JUMPDEST"
,"JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE"
,"POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1"
,"SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1"
,"SSTORE","POP","JUMPDEST","PUSH4","0x60" ,"0x60" ,"0x60" ,"0x60" ,"JUMPDEST","JUMPDEST"
,"JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","PUSH8","0x60" ,"0x60" ,"0x60" 
,"0x60","0x60","0x60" ,"0x60","0x60","STOP","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST",
"PUSH8","0x60" ,"0x60" ,"0x60" ,"0x60","0x60","0x60" ,"0x60","0x60","JUMPDEST","PUSH4","0x60" ,"0x60" ,"0x60" ,"0x60"
,"PUSH1","0x60","PUSH4","0x60" ,"0x60" ,"0x60" ,"0x60","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0"
,"PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP"
,"JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","JUMPDEST"
,"JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE"
,"POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1"
,"SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0",
"POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60","PUSH1","0x40","MSTORE","PUSH1","0x0",
"PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1","SSTORE","POP","JUMPDEST","PUSH1","0x60",
"PUSH1","0x40","MSTORE","PUSH1","0x0","PUSH1","0x0","PUSH1","0x0","POP","DUP2","SWAP1"
,"SSTORE","POP","JUMPDEST","PUSH4","0x60" ,"0x60" ,"0x60" ,"0x60" ,"JUMPDEST","JUMPDEST"
,"JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","PUSH8","0x60" ,"0x60" ,"0x60" 
,"0x60","0x60","0x60" ,"0x60","0x60","STOP","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST"
,"JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST","JUMPDEST"} ;



 
    // N EQUATION 124
 auto N = [](int i, string OPCODE)
    { 

    	vector<string> PUSHX={"PUSH1","PUSH2","PUSH3","PUSH4","PUSH5","PUSH6","PUSH7","PUSH8","PUSH9",
                       "PUSH10","PUSH11","PUSH12","PUSH13","PUSH14","PUSH15","PUSH16","PUSH17",
                       "PUSH18","PUSH19","PUSH20","PUSH21","PUSH22","PUSH23","PUSH24","PUSH25",
                       "PUSH26","PUSH27","PUSH28","PUSH29","PUSH30","PUSH31","PUSH32"};
int returnx=0;

     		 for( int p = 0 ; p < 32 ;p++)
     	{
     		if( PUSHX[p] == OPCODE ) 
     		{
     			// cout << PUSHX[p] << " " << OPCODE << " " << i+p+2 << "\n";
     			returnx=i+p+2;
     		return returnx;
     	}
}
if(returnx ==  0 )
{
     		//	cout << " " << OPCODE << "\n";
              returnx=i+1;
     		  return returnx;
     		}
 };
 

cout << OPCODES.size() << "\n";

vector<int> ALLY;
     // Y EQUATION 122
     function<void(int, vector<string>)> Y = [&](int i, vector<string> OPCODES)
     { 
 if( OPCODES.size() >= i )
   {
     
    if(N(i,OPCODES[i]) <= OPCODES.size() ) 
    	{
    		ALLY.push_back(i+1);
    	if(N(i,OPCODES[i]) < OPCODES.size()) return Y(N(i,OPCODES[i]),OPCODES);

   }
}
     };
    
     Y(0,OPCODES);

     cout << " NO PUSH's DATA LOCATION "  << "\n";
      		 for( int p = 0 ; p < ALLY.size() ; p++ )
      	{
            cout << ALLY[p] << " ";
     	}
     	 cout << "\n" ;

     vector<int> ALLD;
     // D EQUATION 123
      function<void(int, vector<string>)> D = [&](int i, vector<string> OPCODES)
      { 
 if( OPCODES[i] != "JUMPDEST" & OPCODES.size() > i)
   {
   if(N(i,OPCODES[i]) < OPCODES.size())	D(N(i,OPCODES[i]), OPCODES);
   }
   if( OPCODES[i] == "JUMPDEST" & OPCODES.size() > i)
   {
   	ALLD.push_back(i+1);
     if (OPCODES.size() > i+1 ) D(i+1,OPCODES);
   }
 };
   
      D(0,OPCODES);

 cout << "JUMPDEST's LOCATION"  << "\n";
 int breaking=1;
 if(ALLD.size() == 0)
 {
 	cout << "D is an empty set ( subset of Y set)." << "\n";
 }else
 {
	 for( int p = 0 ; p < ALLD.size() ; p++ )
      	{
            cout << ALLD[p] << " " ;
            if (!(std::find(ALLY.begin(), ALLY.end(), ALLD[p]) != ALLY.end()))
{
    breaking=0;
	if( !breaking ) cout << "D is NOT in Y set." << "\n";
	break;
}
}
}


 cout << "\n" ;

if( breaking ) cout << "D is a subset of Y set." << "\n";


}


