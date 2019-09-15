class Solution:
    def dayOfTheWeek(self, day: int, month: int, year: int) -> str:
        weekdays = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"]
        from datetime import datetime
        a = datetime.strptime(str(year) + "/" + str(month) + "/" + str(day),'%Y/%m/%d')
        return weekdays[a.weekday()]