// Test Program for changes in clite
// This file is still undeclaredVariable.cpp
// because undeclaredVariable.cpp is hardcoded
// into Parser.java as the input file
int main() {
    double steve;
    bool r;
    bool l;
    bool a;
    r = true;
    l = true;
    a = r ^^ l; //execution of new xor operator

    steve = 3.1d; //execution of new double type
    steve = steve + 3.4d;
    do {
	steve = steve + 3.1d;
    } while (a && !r);

}
