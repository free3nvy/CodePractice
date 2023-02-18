import time


imitate_1k = ['http://10.244.161.98/01.m3u8', 'http://10.244.90.187/01.m3u8', 'http://10.244.38.123/01.m3u8']

imitate_2k = ['http://10.244.163.230/01.m3u8', 'http://10.244.163.238/01.m3u8', 'http://10.244.38.187/01.m3u8']
imitate_4k = ['http://10.244.161.72/01.m3u8', 'http://10.244.163.65/01.m3u8', 'http://10.244.163.231/01.m3u8']
imitate_8k = ['http://10.244.90.120/01.m3u8', 'http://10.244.38.111/01.m3u8', 'http://10.244.161.89/01.m3u8']
imitate_720p = ['http://10.244.161.87/01.m3u8', 'http://10.244.163.104/01.m3u8', 'http://10.244.38.36/01.m3u8']



    

def circle_add(i, imitate, ystenlive):
    # 2分钟一次循环
    
    for i in range(173,174):
        test = 'test'+ str(i)

        m4 = MultipartEncoder(fields={
        'csrfmiddlewaretoken':'4UctTYoxrU99MAqBHuVnUUG8ypptjUogbZykv49ASVBJBPMCULi0Vz5WIGjc6Wz0',
        'node':'1', 
        'cp_name':ystenlive, 
        'access_mark':test, 
        'live_srcs-TOTAL_FORMS':'1', 
        'live_srcs-INITIAL_FORMS':'0', 
        'live_srcs-MIN_NUM_FORMS':'1', 
        'live_srcs-MAX_NUM_FORMS':'1000', 
        'live_srcs-0-status':'1', 
        'live_srcs-0-cp_name':ystenlive, 
        'live_srcs-0-access_mark':test, 
        'live_srcs-0-url': imitate[i%3], 
        'live_srcs-0-parse_mode':'3', 
        'live_srcs-0-priority':'9', 
        'live_srcs-0-on_off':'on', 
        'live_srcs-0-check_time':'1800', 
        'live_srcs-0-retry_time':'30', 
        'live_srcs-0-delay_time':'30', 
        'live_srcs-0-warn_time':'30', 
        'live_srcs-0-change_type':'0', 
        'live_srcs-__prefix__-status':'1', 
        'live_srcs-__prefix__-parse_mode':'0', 
        'live_srcs-__prefix__-priority':'1', 
        'live_srcs-__prefix__-on_off':'on', 
        'live_srcs-__prefix__-check_time':'1800', 
        'live_srcs-__prefix__-retry_time':'30', 
        'live_srcs-__prefix__-delay_time':'30', 
        'live_srcs-__prefix__-warn_time':'30', 
        'live_srcs-__prefix__-change_type':'0',
        })

        m5 = MultipartEncoder(fields={
        'csrfmiddlewaretoken':'OLT31o33HP1kzfUuARIAwjM1Ypsrw5ZuVQfUDuO68QtUougvN85dxYbP8Gmaj7ae',
        'node':'1',
        'cp':ystenlive,
        'access_mark':test,
        'url':imitate[i%3],
        'tsDur':'10',
        'ts_record_time':'168',
        'ts_mode':'3',
        'copies':'1',
        'code_rate':'500000',
        'channel':'cc'
        })



        r4 = requests.post(url4, data=m4, headers={'Content-Type': m4.content_type}, cookies=cookies)
        print(r4.status_code)

        params = {'id': i}

        r4_get = requests.get(url4_get,cookies=cookies, params=params)
        print(r4_get.status_code)


    
        r5 = requests.post(url5, data=m5, headers={'Content-Type': m5.content_type}, cookies=cookies)
        print(r5.status_code)
        r5_get = requests.get(url5_get,cookies=cookies, params=params)
        print(r5_get.status_code)

        time.sleep


    time.sleep(2*60)

    # delete 

i = 174
imitate = imitate_1k 
ystenlive = 'ystenlive6'


circle_add(i, imitate = imitate, ystenlive=ystenlive)


