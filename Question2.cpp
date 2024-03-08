/*
Find First and Last Position of Element in Sorted Array

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

LINK - https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

*/

class Solution
{
public:
	vector<int> searchRange(vector<int> &nums, int target)
	{
		int s = 0;
		int e = nums.size() - 1;
		vector<int> x(2, -1);

		while (s <= e)
		{
			int mid = s + (e - s) / 2;

			if (nums[mid] == target)
			{
				x[0] = mid;
				e = mid - 1;
			}
			else if (nums[mid] < target)
			{
				s = mid + 1;
			}
			else
			{
				e = mid - 1;
			}
		}

		if (x[0] == -1)
		{
			return x;
		}

		s = 0;
		e = nums.size() - 1;

		while (s <= e)
		{
			int mid = s + (e - s) / 2;

			if (nums[mid] == target)
			{
				x[1] = mid;
				s = mid + 1;
			}
			else if (nums[mid] < target)
			{
				s = mid + 1;
			}
			else
			{
				e = mid - 1;
			}
		}

		return x;
	}
};