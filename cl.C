int sum(int n) {

	int sum=0;
	for(int i=0; i<n; i++) {
	sum = sum +i; }
	return sum;
}

void cl() {
	
	cout << sum(9) << endl;
}
