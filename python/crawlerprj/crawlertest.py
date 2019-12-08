from selenium import webdriver
import time
import random
# xpath 추출 -> 컴퓨터가 사용하는 주소체계(위도 같은)
driver=webdriver.Chrome('d:/crawler/chromedriver.exe')

driver.get("https://www.naver.com")

time.sleep(random.randint(0, 3))

driver.find_element_by_xpath('//*[@id="account"]/div/a/i').click()
#로그인버튼의 xpath를 입력하고 click명령어를 써서 누르게 함

time.sleep(random.randint(0, 3))

userid=driver.find_element_by_xpath('//*[@id="id"]')
userid.send_keys('jaekeon02')
userpw=driver.find_element_by_xpath('//*[@id="pw"]')
userpw.send_keys('jaekeon02')
driver.find_element_by_xpath('//*[@id="frmNIDLogin"]/fieldset/input').click()

time.sleep(random.randint(0, 3)) #시간의 딜레이를 주는것

driver.close()