class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
          sort(points.begin(), points.end());

        int answer = 1;
        int end = points[0][1];

        for (auto point: points)
        {
            if (point[0] > end)
            {
                answer += 1;
                end = point[1];
            }
            else
            {
                end = min(end, point[1]);
            }
        }

        return answer;
    }
};