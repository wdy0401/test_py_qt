# -*- coding: utf-8 -*-'
import os,re,sys

def twadd(a,b):
	i=1
	sum=0
	while i<200:
		sum+=i
		i+=1
	print(sum)
	return sum

def twmul(a,b):
	i=1
	sum=0
	while i<200:
		sum+=i
		i+=1
	print(sum)
	return "string from python"
    
def twdict(a,b):
	c=dict()
	c["char"]="dict_char"
	c["int"]=111
	print(c['int'])
	return c

#genctrinfo()
#checkmatch()
    







# 对于当日交易合约
    # 直接网上取得当日交易合约代码
    
# 对于历史合约
    # 存在性
        # 当日尚未到期的
            # 从当日合约中查询是否存在
        # 已然到期的
            # 从到期日摘盘合约中查询是否存在
    # 挂盘摘盘日期
        # 目前使用最早挂盘最晚摘盘时间代替
        
        
        # 对于每个ic合约

	# pcp 的偏离  阈值

	# long ic      
	
		# 可被覆盖的最贵合约及次贵合约
		# long put

		# 持有到期 看期间每日平仓收益

