# -*- coding:utf-8 -*-

class Company:

    def __init__(self, str):
        self._name = str

    def Add(self, company):
        pass
    
    def Remove(self, company):
        pass

    def Display(self, depth):
        pass

    def LineOfDuty(self):
        pass


class ConcreteCompany(Company):

    def __init__(self, str):
        Company.__init__(self, str)
        self.__listCompany = []

    def Add(self, company):
        self.__listCompany.append(company)

    def Remove(self, company):
        self.__listCompany.remove(company)

    def Display(self, depth):
        str = "-"*depth
        str = str + self._name
        print str
        for element in self.__listCompany:
            element.Display(depth+2)

    def LineOfDuty(self):
        for element in self.__listCompany:
            element.LineOfDuty()

class HRDepartment(Company):

    def __init__(self, str):
        Company.__init__(self, str)

    def Add(self, company):
        print "HRDepartment do not add any company"

    def Remove(self, company):
        print "HRDepartment do not remove any company"

    def Display(self, depth):
        str = "-"*depth
        str = str + self._name
        print str

    def LineOfDuty(self):
        print "%s %s"%(self._name, "公司人力资源管理")


class FinanceDepartment(Company):

    def __init__(self, str):
        Company.__init__(self, str)

    def Add(self, company):
        print "FinanceDepartment do not add any company"

    def Remove(self, company):
        print "FinanceDepartment do not remove any company"

    def Display(self, depth):
        str = "-"*depth
        str = str + self._name
        print str

    def LineOfDuty(self):
        print "%s %s"%(self._name, "公司财务管理")

if "__main__" == __name__:
    mainCompany = ConcreteCompany("广东总公司")
    mainHR = HRDepartment("广东总公司人力资源部")
    mainFin = FinanceDepartment("广东总公司财务部")
    mainCompany.Add(mainHR)
    mainCompany.Add(mainFin)
    auxCompany = ConcreteCompany("广州分公司")
    auxHR = HRDepartment("广州分公司人力资源部")
    auxFin = FinanceDepartment("广州分公司财务部")
    auxCompany.Add(auxHR)
    auxCompany.Add(auxFin)
    mainCompany.Add(auxCompany)
    print "公司基本情况:"
    mainCompany.Display(1)
    print "各部门的职能:"
    mainCompany.LineOfDuty()
    auxCompany.Remove(auxFin)
    print "调整后的公司基本情况:"
    mainCompany.Display(1)
    print "各部门职能:"
    mainCompany.LineOfDuty()
    

