/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.swift.enumstrict;

import com.facebook.swift.codec.*;
import org.apache.thrift.TException;
import org.apache.thrift.protocol.TProtocol;

@SwiftGenerated
public enum MyBigEnum implements com.facebook.thrift.payload.ThriftSerializable {
    UNKNOWN(0),
    ONE(1),
    TWO(2),
    THREE(3),
    FOUR(4),
    FIVE(5),
    SIX(6),
    SEVEN(7),
    EIGHT(8),
    NINE(9),
    TEN(10),
    ELEVEN(11),
    TWELVE(12),
    THIRTEEN(13),
    FOURTEEN(14),
    FIFTEEN(15),
    SIXTEEN(16),
    SEVENTEEN(17),
    EIGHTEEN(18),
    NINETEEN(19);

    private final int value;

    MyBigEnum(int value) {
        this.value = value;
    }

    @ThriftEnumValue
    public int getValue() {
        return value;
    }

    public static MyBigEnum fromInteger(int n) {
        switch (n) {
        case 0:
            return UNKNOWN;
        case 1:
            return ONE;
        case 2:
            return TWO;
        case 3:
            return THREE;
        case 4:
            return FOUR;
        case 5:
            return FIVE;
        case 6:
            return SIX;
        case 7:
            return SEVEN;
        case 8:
            return EIGHT;
        case 9:
            return NINE;
        case 10:
            return TEN;
        case 11:
            return ELEVEN;
        case 12:
            return TWELVE;
        case 13:
            return THIRTEEN;
        case 14:
            return FOURTEEN;
        case 15:
            return FIFTEEN;
        case 16:
            return SIXTEEN;
        case 17:
            return SEVENTEEN;
        case 18:
            return EIGHTEEN;
        case 19:
            return NINETEEN;
        default:
            return null;
        }
    }

    public static com.facebook.thrift.payload.Reader<MyBigEnum> asReader() {
        return MyBigEnum::read0;
    }

    public static MyBigEnum read0(TProtocol iprot) throws TException {
        return MyBigEnum.fromInteger(iprot.readI32());
    }

    public void write0(TProtocol oprot) throws TException {
        oprot.writeI32(getValue());
    }


}
