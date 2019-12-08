# 파이썬으로 텍스트파일을 컨트롤하기 위해 codecs를 추출(import)
import codecs

# 텍스트 파일 생성. 파일이 해당 경로에 없으면 자동 생성
# .open("경로",encoding="인코딩",mode="모드")
# encoding => 한글 사용 예상되면 utf-8
# mode => 'w' ->새로작성,'a'=> 기존요소에 이어서 append의 약자
f=codecs.open("d:/crawler/test.txt",encoding="utf-8",mode='w')
# f-> 텍스트파일 그 자체
a="Hello World\r\n"
for i in range(100):
    f.write(a)
# f.write("Hello World!\r\n")
# 줄을 바꾸려면 \r\n