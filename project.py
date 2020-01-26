from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
import time
import curses

stdscr = curses.initscr()
curses.curs_set(0)
curses.noecho()
curses.cbreak()


line = 'b'
last = 'a'
chrome_path = 'C:/bin/chromedriver.exe'
browser = webdriver.Chrome(executable_path=chrome_path)
window = curses.newwin(100, 100, 1, 1)
while True:
    browser.get("http://192.168.43.155:80/")
    #time.sleep(0.5)
    pre = browser.find_element_by_xpath("//pre[@style='word-wrap: break-word; white-space: pre-wrap;']")
    line1 = pre.text
    line = line1[-1:]
    print(line)
    if line!=last:
        if line == 'F':
            stdscr.refresh()
            stdscr.addstr(10,12,
'''
     .
   .:;:.
 .:;;;;;:.
   ;;;;;
   ;;;;;
   ;;;;;
   ;;;;;
   ;:;;;
   : ;;;
     ;:;
   . :.;
     . :
   .   .

      .
'''
)
        elif line == 'B':
            stdscr.refresh()
            stdscr.addstr(10,12,
'''
     .
       .
   . ;.
    .;
     ;;.
   ;.;;
   ;;;;.
   ;;;;;
   ;;;;;
   ;;;;;
   ;;;;;
   ;;;;;
 ..;;;;;..
  ':::::'
    ':`
'''
)
        elif line == 'R':
            stdscr.refresh()
            stdscr.addstr(10,12,
'''
                   .
   .. ............;;.
    ..::::::::::::;;;;.
  . . ::::::::::::;;:'
                  :'
'''
)
        elif line == 'L':
            stdscr.refresh()
            stdscr.addstr(10,12,
'''
       .
     .;;............ ..
   .;;;;::::::::::::..
    ':;;:::::::::::: . .
      ':
'''
)
    last = line
    curses.curs_set(1)
    curses.echo()
    curses.nocbreak()
    stdscr.keypad(False)
    

