#include<iostream>
#include<climits>
#include<cmath>
using namespace std;

void cinflush(){

	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');

}
void cinerror(){

		if (!cin){
			cout <<"Woah dude, what are you trying to do to me? Let's try that again\n-------\n";
		}
}

void nancout(){
	cout <<"The answer to this isn't a number. What are you trying to pull, square?\n";
}

void seperate(){
	cout<<"--------------------------------------------------------------\n";
}

void algebra(){

		string operation;
		int a,b;
		cout <<"\nWack in your first integer dude\n";
		cin >> a;
		cout <<"Mega. Now bash in a second integer,\n";
		cin >> b;
		
		cout<<"What would you like to do with these Amigo?\nmultiply, divide, subtract add, compare or quit?\n";
		cin >> operation;
		
		seperate();	
		//Mathermatical Operations
		if (operation == "multiply")
		{
			cout <<"Wicked sick. The product of these is: "<<a*b<<endl;
		}
		
		else if (operation == "divide")
		{
			cout <<"Rad!. The first number divided by the second is: "<<(double)a/(double)b<<endl;
		}
		
		else if (operation == "subtract")
		{
			cout <<"Eat my shorts boff!. The second number subtracted from the first is: "<<a - b<<endl;
		}
		
		else if (operation == "add")
		{
			cout <<"Dope! The sum of these numbers is:\n";
			cout <<a + b<<endl;
		}
		
		else if (operation == "compare")
		{
			if (a < b)
			{
				cout <<"I'm pretty sure "<<a<<" is smaller than "<<b<<" hombre\n";
			}
			else if (a > b)
			{
				cout <<"I'm pretty sure "<<a<<" is larger than "<<b<<" padre\n";
			}
			else
			{
				cout <<"These integerinos are the same my man\n";
			}
			
		}

		else if (operation == "quit"){
		}

		//Uknown string error check
		else 
		{
			cout<<"\nWoah man, speak english. I didn't understand what you said so here's some Shakespeare:\nBut, soft! what light through yonder window breaks?\nIt is the east, and Juliet is the sun.\nArise, fair sun, and kill the envious moon,\nWho is already sick and pale with grief,\nIt is my lady, O, it is my love!\nO, that she knew she were!\nShe speaks yet she says nothing: what of that?\nHer eye discourses; I will answer it.\nI am too bold, 'tis not to me she speaks:\nSee, how she leans her cheek upon her hand!\nO, that I were a glove upon that hand,\nThat I might touch that cheek!\nOk, now you know how to speak english, let's try that again.\n";
			seperate();

		}

}

void intercept(){
	double m, c;
	cout<<"Let's do this. Considering the equation y = mx + c, enter your value for m\n";
	cin >>m;
	cout<<"And your value for c?\n";
	cin >>c;
	seperate();
	cout <<"Sweet! The x intercept is at "<< (-1*c)/m<<endl;
	seperate();
}


void veclength(int dimensions){
	double length,x,y,z;
	cout <<"Enter the freakin' vector components bro!\n";
	cout <<"x:\n";
	cin >> x;
	cout <<"y:\n";
	cin >> y;
	cout <<"z:\n";
	cin >> z;
	if (dimensions == 3)
	{
		length = sqrt(x*x+y*y+z*z);
	}

	else
	{
		double E;
		cout <<"E:\n";
		cin >> E;

		length = sqrt(E*E+x*x+y*y+z*z);
	}

		seperate();
		if (isnan(length)){
			nancout();
		}
		else{
		cout << "The Length of this vector is "<<length<<"."<<" Dank!\n";
		}
		seperate();
}	

double abssum(double a, double b){
	double sum = (abs(a) + abs(b))*(abs(a) + abs(b));
	return sum;
}


double vecsum(double a, double b){
	double sum = (a + b)*(a + b);
	return sum;
}


void mass(){



	
	double massa,massb;
	double pxa,pya,pza;
	double pxb,pyb,pzb;
	double invmass;

	cout <<"Enter the mass and the momenta components for the two particles (GeV):\n";
	cout <<"Particle One:\nMass:\n";
	cin >> massa;
	cout <<"Px:\n";
	cin >>pxa;
	cout <<"Py:\n";
	cin >>pya;
	cout <<"Pz:\n";
	cin >>pza;

	cout <<"Particle Two:\nMass:\n";
	cin >> massb;
	cout <<"Px:\n";
	cin >>pxb;
	cout <<"Py:\n";
	cin >>pyb;
	cout <<"Pz:\n";
	cin >>pzb;

	invmass = sqrt(abssum(pxa,pxb)+abssum(pya,pyb)+abssum(pza,pzb)-vecsum(pxa,pxb)-vecsum(pxa,pxb)-vecsum(pxa,pxb));
	seperate();

	if (isnan(invmass)){
		nancout();
	}
	else{
	cout<<"The invariant mass of these two partcles is "<<invmass<<" GeV! Wowza!\n";
	}
	seperate();

}

void quad(){
	
	double a,b,c;
	
	cout <<"Considering the quadratic equation ax^2 + bx + c = 0, enter your values for:"<<endl;
	cout <<"a:\n";
	cin >>a;
	cout <<"b:\n";
	cin >>b;
	cout <<"c:\n";
	cin >>c;

	double x_a = (-b + sqrt(b*b-4*a*c))/(2*a);
	double x_b = (-b - sqrt(b*b-4*a*c))/(2*a);

	seperate();
	cout <<"The solutions are x = "<<x_a<<", x = "<<x_b<<". Right on!\n";
	seperate();
}

//cin buffer clearer function to avoid infinite loops

//MAIN FUNCTION
int main(){

	while (true){
		
		string type;
		cout<<"\n---------------------------------------------------"<<endl
			<<"\nWhat type of calculation would you like to do Dawg?"<<endl
			<<"'alebgra'\tperform simple algebra operations on two integers"<<endl
			<<"'intercept'\tfind the x intercept of a straight line"<<endl
			<<"'mass'\t\tfind the invariant mass of two particles"<<endl
			<<"'threevector'\tfind the length of a 3vector"<<endl
			<<"'fourvector'\tfind the length of a 4vector"<<endl
			<<"'quadratic'\tsolve a quadratic equation"<<endl
			<<"'quit'\t\tquit program\n";
 		cin >> type;
		cinerror();
		cinflush();

		if (type == "algebra")
		{
			algebra();
		}

		else if (type == "intercept"){
			intercept();

		}

		else if (type == "mass"){
			mass();
		}

		else if (type == "threevector"){
			veclength(3);
		}

		else if (type == "fourvector"){
			veclength(4);
		}

		else if (type == "quadratic"){
			quad();
		}
		else if (type == "quit"){
			seperate();
			cout <<"Alright homie. Smell you later!\n";
			seperate();
			break;

		}

		else {
			cout <<"Didn't understand that G, let's try it again\n.";
		}

			cinerror();
			cinflush();
			continue;
	
		
		cout <<"Narly!\n----------\n";
	return 0;
	}

}
