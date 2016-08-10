#include "stdafx.h"
#include "GEOMELE.h"


GEOMELE::GEOMELE() 
{
	 m_line = { 0.0, 0.0, 0.0, 0.0 };
	 m_arc = { 0.0, 0.0, 0.0, 0.0, 0.0 };
	 m_circle = { 0.0, 0.0, 0.0 };
	 m_geomstandData = { 0.0, 0.0, 0.0, 0.0, m_line, m_arc, m_circle, 1, -1, -1, NULL };

}


GEOMELE::~GEOMELE()
{
}
GeomStandData GEOMELE::ReadLineData(LINE line)//ReadLineData��GeomStandData ���͵ĺ���������Ҫ��ǰ���GeomStandData
{
	//����LINE���ĸ����������GEOMELE����ʼ��ֹ����
	m_geomstandData.GeoEle_start_x0 = line.x0;
	m_geomstandData.GeoEle_start_y0 = line.y0;
	m_geomstandData.GeoEle_start_x1 = line.x1;
	m_geomstandData.GeoEle_start_y1 = line.y1;
	m_geomstandData.m_GeomEleID++;
	return m_geomstandData;
}
GeomStandData GEOMELE::ReadARCData(ARC m_arc)
{
	//����LINE���ĸ����������GEOMELE����ʼ��ֹ����
	m_geomstandData.GeoEle_start_x0 = line.x0;
	m_geomstandData.GeoEle_start_y0 = line.y0;
	m_geomstandData.GeoEle_start_x1 = line.x1;
	m_geomstandData.GeoEle_start_y1 = line.y1;
	m_geomstandData.m_GeomEleID++;
	return m_geomstandData;
}