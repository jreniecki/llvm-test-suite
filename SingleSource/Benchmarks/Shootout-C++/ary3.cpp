// -*- mode: c++ -*-
// $Id$
// http://www.bagley.org/~doug/shootout/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    int i, k, n = ((argc == 2) ? atoi(argv[1]) : 1500000);
    typedef vector<int> ARY;
    ARY x(n);
    ARY y(n);

    for (i=0; i<n; i++) {
	x[i] = i + 1;
    }
    for (k=0; k<1000; k++) {
	for (int i = n - 1; i >= 0; --i) {
	    y[i] += x[i];
	}
    }

    cout << y[0] << " " << y.back() << endl;
}
