class Module {

	public:
		int datawidth;
		
		char moduleType; //method will be needed to convert this into add,sub etc.
		
		std::vector<Wire*> inputList;
		std::vector<Wire*> outputList;
		
		void Module::putModule {
			//do the type conversion here
			
			cout << "#(" << datawidth << ")" << endl; //put datawidth groomed.
			
			//now the type again, with some allowance for numbering modules
			
			//iterate inputs list, put inputs in order
			
			//then iterate outputs
