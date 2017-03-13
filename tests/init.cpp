#include <vector.hpp>
#include <catch.hpp>

SCENARIO("vector init", "[init]") {
	vector_t vector;
	REQUIRE(vector.size() == 0);
	REQUIRE(vector.capacity() == 0);
}

SCENARIO("vector with params", "[init]") {
	vector_t vector;
	REQUIRE(vector.size()==3);
	REQUIRE(vector.capacity() ==3);
	for(int i=0;i<vector.size();i++){
		REQUIRE(ptr[i]==0)
	}
}

SCENARIO("vector with vector","[init]"){
	vector_t vector;
	REQUIRE (vector.ptr==0);
	size=second.size;
	capacity=second.capacity;
	for(int i=0;i<size_;i++)
		ptr=new int *[size];
	for(int i=0;i<size_;i++){
		ptr[i]=second.ptr[i];
	}
}

SCENARIO("vector delete","[init]"){
	vector_t vector;
	for(int i=0;i<size();i++){
		delete []ptr;
	}
}

SCENARIO ("vector operator = ","[init]"){
	vector_t vector;
	for(int i=0;i<size();i++){
		delete []ptr;
	}
	delete[]ptr;
	ptr=new int*[size];	
	for(int i=0;i<vector.size();i++){

	}

}

