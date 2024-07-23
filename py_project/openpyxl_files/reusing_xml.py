#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : resuing_xml.py
#   Last Modified : 2024-07-05 18:55
#   Describe      :
#
# ====================================================
xml = """
<txPr>
  <a:bodyPr wrap="square" lIns="38100" tIns="19050" rIns="38100" bIns="19050" anchor="ctr" xmlns:a="http://schemas.openxmlformats.org/drawingml/2006/main">
    <a:spAutoFit />
  </a:bodyPr>
  <a:lstStyle xmlns:a="http://schemas.openxmlformats.org/drawingml/2006/main" />
  <a:p xmlns:a="http://schemas.openxmlformats.org/drawingml/2006/main">
    <a:pPr>
      <a:defRPr>
        <a:solidFill>
          <a:srgbClr val="0070C0" />
        </a:solidFill>
      </a:defRPr>
    </a:pPr>
    <a:endParaRPr lang="de-DE" />
  </a:p>
</txPr>
"""
from openpyxl.chart.text import RichText
from openpyxl.xml.functions import fromstring

xml = fromstring(txt)
text_props = RichText.from_tree(xml)
 # Assuming that this is for the third data series for a chart and we want to
 # add a label below the fourth data point
 highlight = chart.series[2]
 highlight.graphicalProperties.line.prstDash = "solid"
 highlight.graphicalProperties.ln.solidFill = "0070C0"
 highlight.graphicalProperties.line.width = 40000 # make the line thicker than normal
 highlight.dLbls = DataLabelList()
 highlight = DataLabel(idx=3, showSerName=True, dLblPos="b", txPr=text_props)
 highlight.dLbls.dLbl.append(label)
