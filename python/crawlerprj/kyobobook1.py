from selenium import webdriver
import time
import random
# 네이버로 이동한다음 검색창에 "교보문고"를 입력하고
# 검색버튼을 누르게 해주세요. 이동한 페이지에서 결과창에 나오는
# 교보문고 버튼을 클릭해서 페이지에 접근하게 만들어주세요
driver=webdriver.Chrome('d:/crawler/chromedriver.exe')
driver.get("https://www.naver.com")
time.sleep(random.randint(0, 3))

search_kyobo=driver.find_element_by_xpath('//*[@id="query"]')
# 검색창 설정
search_kyobo.send_keys('교보문고')
# 검색창에 교보문고 입력 아니면 '교보문고\n'을 사용할 수도 있음(\n은 줄바꿈 즉, 엔터역할)
driver.find_element_by_xpath('//*[@id="search_btn"]/span[2]').click()
# 검색버튼 클릭
driver.find_element_by_xpath('//*[@id="main_pack"]/div[2]/ul/li/dl/dt/a/b').click()
# 교보문고 홈페이지 클릭
driver.find_element_by_xpath('//*[@id="header"]/div[3]/ul[2]/li[1]/a').click()
# 교보문고 베스트 클릭, 하지만 교보문고 팝업때문에 셀레니움이 작업을멈춤
# 그래서 검색을통해서가 아닌 바로접속을 하면 가능함