<?xml version="1.0" encoding="UTF-8"?>
<xs:schema xmlns:xs="http://www.w3.org/2001/XMLSchema">

    <!-- Ràng buộc hãng xe: Toyota, Honda, BMW -->
    <xs:simpleType name="tenHangType">
        <xs:restriction base="xs:string">
            <xs:enumeration value="Toyota"/>
            <xs:enumeration value="Honda"/>
            <xs:enumeration value="BMW"/>
        </xs:restriction>
    </xs:simpleType>

    <!-- Ràng buộc tên dòng xe: 4 ký tự cuối phải là chữ số -->
    <xs:simpleType name="tenDongType">
        <xs:restriction base="xs:string">
            <xs:pattern value=".*[0-9]{4}"/>
        </xs:restriction>
    </xs:simpleType>

    <!-- Ràng buộc giá: lớn hơn 0 -->
    <xs:simpleType name="giaType">
        <xs:restriction base="xs:decimal">
            <xs:minExclusive value="0"/>
        </xs:restriction>
    </xs:simpleType>

    <!-- Cấu trúc dòng xe -->
    <xs:complexType name="dongXeType">
        <xs:sequence>
            <xs:element name="phienban" type="xs:string"/>
            <xs:element name="dongco" type="xs:string"/>
            <xs:element name="gia" type="giaType"/>
        </xs:sequence>
        <xs:attribute name="ten" type="tenDongType" use="required"/>
    </xs:complexType>

    <!-- Cấu trúc hãng xe: tối đa 10 dòng xe -->
    <xs:complexType name="hangXeType">
        <xs:sequence>
            <xs:element name="dongxe" type="dongXeType" maxOccurs="10"/>
        </xs:sequence>
        <xs:attribute name="ten" type="tenHangType" use="required"/>
    </xs:complexType>

    <!-- Cấu trúc thẻ gốc banggiaxe: tối đa 5 hãng xe -->
    <xs:element name="banggiaxe">
        <xs:complexType>
            <xs:sequence>
                <xs:element name="hangxe" type="hangXeType" maxOccurs="5"/>
            </xs:sequence>
        </xs:complexType>
    </xs:element>

</xs:schema>
