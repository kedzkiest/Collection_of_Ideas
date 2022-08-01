import pyautogui as ag
import time

def main():
    f = open('autoType.txt', 'r', encoding='utf-8')
    text = f.read()
    f.close()
    time.sleep(3)
    ag.typewrite(text, 0.001)
    
if __name__ == '__main__':
    main()