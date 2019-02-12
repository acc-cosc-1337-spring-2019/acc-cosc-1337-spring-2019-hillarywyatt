#include "sample_value_ref.h"
//

void pass_by_value_and_ref(int num1, int & num2, const int & num3)
{
	num1 = 20;// modifyin this vaLUE IS local to the function
	num2 = 50;// modifying this value will potentially CHANGE CALLER VARIABLE
	//num3 = 100; not modifiable- const variable
}
