#ifndef QVALUES_HPP
#define QVALUES_HPP





template<unsigned NF, unsigned PE, unsigned Num, 
	 typename TA, typename TR>
class Qvalues {
public:
  TA m_qvalues[PE][NF][Num];
};


#endif