/*
Search Insert Position

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1

LINK - https://leetcode.com/problems/search-insert-position/description/

*/


class Solution
{
public:
	int searchInsert(vector<int> &nums, int target)
	{
		int s = 0;
		int e = nums.size() - 1;

		while (s <= e)
		{
			int mid = s + (e - s) / 2;

			if (nums[mid] == target)
			{
				return mid;
			}
			else if (target > nums[mid])
			{
				s = mid + 1;
			}
			else
			{
				e = mid - 1;
			}
		}
		return s;
	}
};
