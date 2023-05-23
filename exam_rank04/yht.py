from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By

# Selenium için Chrome sürücüsünü başlatma
service = Service('path/to/chromedriver')  # chromedriver dosyasının yolu
driver = webdriver.Chrome(service=service)

# TCDD web sitesine gitme
driver.get('https://ebilet.tcddtasimacilik.gov.tr/view/eybis/tnmGenel/int_sat_001.jsf')

# EmptySeat durumunu kontrol etme
empty_seat_element = driver.find_element(By.XPATH, '//span[@data-v-298f4f68="emptySeat"]')
empty_seat_durumu = empty_seat_element.get_attribute("flex")

if empty_seat_durumu == "1":
    print("EmptySeat durumu 1.")
else:
    print("EmptySeat durumu 1 değil:", empty_seat_durumu)

# Tarayıcıyı kapatma
driver.quit()
