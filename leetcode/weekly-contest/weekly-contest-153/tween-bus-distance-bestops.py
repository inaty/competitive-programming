class Solution:
    def distanceBetweenBusStops(self, distance: List[int], start: int, destination: int) -> int:
        n = len(distance)
        clockwise = 0
        counterclockwise = 0

        now = start
        while True:
            clockwise += distance[now]
            if now == n-1:
                now = 0
            else:
                now += 1
            if now == destination:
                break

        now = start
        while True:
            if now == 0:
                now = n-1
                counterclockwise += distance[now]
            else:
                now -= 1
                counterclockwise += distance[now]
            if now == destination:
                break

        return min(clockwise,counterclockwise)


