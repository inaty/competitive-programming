import urllib
import http.cookiejar, urllib.request
from bs4 import BeautifulSoup

username, password = '', ''

'''
参考：http://kyuridenamida.hatenablog.com/entry/2016/03/27/204750
'''
def login():
    postdata = {
        'name': username,
        'password': password
    }
    encoded_postdata = urllib.parse.urlencode(postdata).encode('utf-8')
    cj = http.cookiejar.CookieJar()
    opener = urllib.request.build_opener(urllib.request.HTTPCookieProcessor(cj))
    req = opener.open("https://arc001.contest.atcoder.jp/login",encoded_postdata)
    return opener


def get_problem_urls(opener, url):
    req = opener.open(url)
    soup = BeautifulSoup(req, "html.parser")

    link_urls = []
    for i in range(1, 100):
        for tag in soup.select('#main-container > div.row > div:nth-child(2) > div > table > tbody > tr:nth-child(' + str(i) + ') > td:nth-child(2) > a'):
            link_url = base_url + tag.attrs['href']
            if link_url == '':
                break
            link_urls.append(link_url)

    return link_urls


if __name__ == '__main__':

    contest_id = "abc123"
    base_url = 'https://atcoder.jp'
    url = base_url + '/contests/' + contest_id + "/tasks"

    opener = login()

    problem_urls = get_problem_urls(opener, url)

    for problem_url in problem_urls:

