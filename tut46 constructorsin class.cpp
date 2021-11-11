/*for a protected member 
                             Public-derivation    Private-derivation    Protected-derivation   
   1. Private members:       Not                  Not                   Not                    
   2. Protected members:     Protected            Private               Protected                                     
   3. Public members:        Public               Private               Protected       */                          

/*
    * note
	-  we can use construtors in derived class
	-  if base class constructor does not have any arguments , no need for construtor in derived class
	-  if there is more than one argument in base class , deroved class needs to pass argumnets
	-  arguments ho ya na ho base class construtor always called first
    
	* In multiple inheritance
	A-c   B-c
	
	-base classes are constructed in the order in which they appear
	
	* In multilevel inheritance
	A-B-C
	
	-construtors called in order of inheritance
	
	* Special syntax
	
	-Constructor of the derived class receives all the arguments at once and then
	 will pass the calls the respective base class
	
	-The body is called after all the construtors are finished executing  
	
	*Special Case
	
	-The construtors for virtual base class are invoked before non virtual base class
	-Multiple virtual base class are invoked in the order od declaration
	-Any non-virtual base class are constructed before the derived construtor is executed
		  
	            
*/

