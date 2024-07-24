#include <vector>
#include <algorithm>
namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    typedef struct CStats
	{
		double average;
		double max;
		double min;
		CStats()
		{	
			average=max=min=0.0;
		}
	}Stats;
    Stats ComputeStatistics(const std::vector<double>& );
}
