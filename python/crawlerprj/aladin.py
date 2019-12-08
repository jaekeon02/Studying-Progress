# 알라딘 베스트 페이지에 접근해서
# 전체 소스코드를 획득한 다음
# 거기서 "li"태그 자료만 정제해서
# 갯수가 몇개인지 확인해보세요
from selenium import webdriver
# 셀레니움 선언
from bs4 import BeautifulSoup
# 뷰티풀스프 선언
import codecs
# 텍스트 파일 변환을 위한 코덱스 선언
driver=webdriver.Chrome('d:/crawler/chromedriver.exe')
# 크롬드라이버 설정
driver.get('https://www.aladin.co.kr/shop/common/wbest.aspx?BranchType=1&start=we')
# 목표 사이트
source=driver.page_source
# 페이지 소스 따오기
s1=BeautifulSoup(source,"html.parser")
# 파싱 시키기
aladin1=s1.find_all("div",class_="ss_book_box")
# 범위를 좁히기
s2=[]
for data in aladin1:
    s2.append(data)
print(len(s2))

# s2.find_all("li")는 사용할 수 가 없음 -> 리스트형식이기 대문에
# 다만 s2의 안 자료는 뷰티플자료이기 때문에 하나하나씩 꺼낸다면 사용할수 있음
f=codecs.open("d:/crawler/result2.txt",encoding="utf-8",mode='w')
#텍스트 변환을 위한 설정(주소,인코딩,모드등)
i=1
for item in s2:

# for li in item.find_all("li"):
# print(li.text) 
# print("-"*50) 내용을 확인할때 쓰는 for문
# li를 모아놓은 리스트 형식으로 다시 생성되기때문에,다시한번 for문을 사용해 풀어줄필요가 있음
    li=item.find_all("li")
    f.write(str(i)+"등 도서정보\r\n")
    i+=1
#     print(li[1].text)
#     print(li[2].text)
#     print(li[3].text)
# 다만 이방식으로 출력하게되면 완벽하지않음(밀리거나 부족한경우 출력이 안됨
#     print(len(li))을 이용해 확인
    if len(li)<8:
        f.write(li[0].text+"\r\n")
        f.write(li[1].text+"\r\n")
        f.write(li[2].text+"\r\n")
    else:
        f.write(li[1].text+"\r\n")
        f.write(li[2].text+"\r\n")
        f.write(li[3].text+"\r\n")
    f.write("-"*50+"\r\n")

    
