from selenium import webdriver
import time
from bs4 import BeautifulSoup
import codecs

driver=webdriver.Chrome('d:/crawler/chromedriver.exe')
driver.get("http://www.kyobobook.co.kr/bestSellerNew/bestseller.laf?orderClick=d79")
# 이 경우는 절차를 통해 접근하는게 아닌 바로 접근이 가능하기에 바로 연결
time.sleep(1)
source=driver.page_source
#현재 페이지의 소스코드를 전부 긁어옴
#셀레니움의 역할은 특정 사이트에 접근해 그곳의 모든정보를 가져옴(필터링역할이 약함)
s1=BeautifulSoup(source,"html.parser")
# source를 html를 통해 이해해라
book_title=s1.find_all("div",class_="title")
book_author=s1.find_all("div",class_="author")
book_price=s1.find_all("div",class_="price")
# 태그명(일종의 성씨)가 div,class_="title"클래스명 타이틀(일종의 이름)
#s2[0:4]=[] 삭제를 해도 되지만
for data in book_title[4:]:# 시작순서를 4번째 부터 하면됨
    print(data.text.strip())
for author in book_author:
    print(author.text.strip().replace("\t","").replace("\n",""))
for money in book_price:
    print(money.text.strip().replace("\t","").replace("\n","").replace("[10%↓ + 5% 적립]",""))
# print(len(s2))로 길이를 파악할수 있다는건 자료구조가 리스트구조로나옴
# 태그 부분만 걷어내면 자신이 원하는 자료를 얻어낼수 있다
booklist=[]
authorlist=[]
pricelist=[]
for data in book_title[4:]:
    booklist.append(data.text.strip())
print(booklist)
print(len(booklist))

for author in book_author:
    authorlist.append(author.text.strip().replace("\t","").replace("\n",""))
print(authorlist)
print(len(authorlist))

for money in book_price:
    pricelist.append(money.text.strip().replace("\t","").replace("\n","").replace("[10%↓ + 5% 적립]",""))
print(pricelist)
print(len(pricelist))
f=codecs.open("d:/crawler/result.txt",encoding="utf-8",mode='w')

for idx in range(len(booklist)):
    f.write(str(idx+1)+"등 도서정보"+"\r\n")
    f.write(booklist[idx]+"\r\n")
    f.write(authorlist[idx]+"\r\n")
    f.write(pricelist[idx]+"\r\n")
    f.write("-"*70+"\r\n")
# 위의 3개 리스트를 이용해서
# 제목, 작가, 가격정보를 먼저 리스트에 각각담아주시고
# 담은 내용을 토대로 순위별 정보를 출력해주세요
driver.close