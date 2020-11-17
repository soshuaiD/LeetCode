int ZeroOnePackage(std::vector<int> nums,int target){
	// int len = nums.size();
	// std::vector<std::vector<int>> dp[len+1,std::vector<int>(target+1,0)];

	// for (int i = 1; i <= len; ++i)
	// {
	// 	for (int j = 1; j <= target; ++j)
	// 	{
	// 		if (nums[i] > j)
	// 		{
	// 			dp[i][j] = dp[i-1][j];
	// 		}
	// 		else{
	// 			dp[i][j] = max(dp[i-1][j],dp[i-1][j-nums[i]]+nums[i]);
	// 		}
	// 	}
	// }
	// return dp[len][target];
	std::vector<int> dp(target+1,0);
	for (auto num: nums)
	{
		//压缩状态，每一层dp相当于从上一层中读取，因此内层循环倒序，避免改变左值
		for (int i = target; i >=num; i--)
		{
			dp[i] = max(dp[i] , dp[i-num] + num); 
		}
	}
	return dp[target];
}	

int CompletePackage(std::vector<int> nums,int target){
	// int len = nums.size();
	// std::vector<std::vector<int>> dp[len+1,std::vector<int>(target+1,0)];

	// for (int i = 1; i <= len; ++i)
	// {
	// 	for (int j = 1; j <= target; ++j)
	// 	{
	// 		if (nums[i] > j)
	// 		{
	// 			dp[i][j] = dp[i-1][j];
	// 		}
	// 		else{
	// 			dp[i][j] = max(dp[i-1][j],dp[i][j-nums[i]]+nums[i]);
	// 		}
	// 	}
	// }
	// return dp[len][target];
	std::vector<int> dp(target+1,0);
	for (auto num: nums)
	{
		//压缩状态，每一层dp需要使用本层和当前位置的dp，因此内层循环正序
		for (int i = num; i <=target; i++)
		{
			dp[i] = max(dp[i] , dp[i-num] + num); 
		}
	}
	return dp[target];
}