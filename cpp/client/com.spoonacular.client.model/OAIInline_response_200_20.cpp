/**
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.0
 * Contact: mail@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIInline_response_200_20.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_20::OAIInline_response_200_20(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_20::OAIInline_response_200_20() {
    this->init();
}

OAIInline_response_200_20::~OAIInline_response_200_20() {

}

void
OAIInline_response_200_20::init() {
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_original_isSet = false;
    m_original_isValid = false;
    
    m_original_name_isSet = false;
    m_original_name_isValid = false;
    
    m_name_isSet = false;
    m_name_isValid = false;
    
    m_name_clean_isSet = false;
    m_name_clean_isValid = false;
    
    m_amount_isSet = false;
    m_amount_isValid = false;
    
    m_unit_isSet = false;
    m_unit_isValid = false;
    
    m_unit_short_isSet = false;
    m_unit_short_isValid = false;
    
    m_unit_long_isSet = false;
    m_unit_long_isValid = false;
    
    m_possible_units_isSet = false;
    m_possible_units_isValid = false;
    
    m_estimated_cost_isSet = false;
    m_estimated_cost_isValid = false;
    
    m_consistency_isSet = false;
    m_consistency_isValid = false;
    
    m_aisle_isSet = false;
    m_aisle_isValid = false;
    
    m_image_isSet = false;
    m_image_isValid = false;
    
    m_meta_isSet = false;
    m_meta_isValid = false;
    
    m_nutrition_isSet = false;
    m_nutrition_isValid = false;
    }

void
OAIInline_response_200_20::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_20::fromJsonObject(QJsonObject json) {
    
    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    
    m_original_isValid = ::OpenAPI::fromJsonValue(original, json[QString("original")]);
    
    
    m_original_name_isValid = ::OpenAPI::fromJsonValue(original_name, json[QString("originalName")]);
    
    
    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    
    m_name_clean_isValid = ::OpenAPI::fromJsonValue(name_clean, json[QString("nameClean")]);
    
    
    m_amount_isValid = ::OpenAPI::fromJsonValue(amount, json[QString("amount")]);
    
    
    m_unit_isValid = ::OpenAPI::fromJsonValue(unit, json[QString("unit")]);
    
    
    m_unit_short_isValid = ::OpenAPI::fromJsonValue(unit_short, json[QString("unitShort")]);
    
    
    m_unit_long_isValid = ::OpenAPI::fromJsonValue(unit_long, json[QString("unitLong")]);
    
    
    
    m_possible_units_isValid = ::OpenAPI::fromJsonValue(possible_units, json[QString("possibleUnits")]);
    
    m_estimated_cost_isValid = ::OpenAPI::fromJsonValue(estimated_cost, json[QString("estimatedCost")]);
    
    
    m_consistency_isValid = ::OpenAPI::fromJsonValue(consistency, json[QString("consistency")]);
    
    
    m_aisle_isValid = ::OpenAPI::fromJsonValue(aisle, json[QString("aisle")]);
    
    
    m_image_isValid = ::OpenAPI::fromJsonValue(image, json[QString("image")]);
    
    
    
    m_meta_isValid = ::OpenAPI::fromJsonValue(meta, json[QString("meta")]);
    
    m_nutrition_isValid = ::OpenAPI::fromJsonValue(nutrition, json[QString("nutrition")]);
    
    
}

QString
OAIInline_response_200_20::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_20::asJsonObject() const {
    QJsonObject obj;
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_original_isSet){
        obj.insert(QString("original"), ::OpenAPI::toJsonValue(original));
    }
	if(m_original_name_isSet){
        obj.insert(QString("originalName"), ::OpenAPI::toJsonValue(original_name));
    }
	if(m_name_isSet){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
	if(m_name_clean_isSet){
        obj.insert(QString("nameClean"), ::OpenAPI::toJsonValue(name_clean));
    }
	if(amount.isSet()){
        obj.insert(QString("amount"), ::OpenAPI::toJsonValue(amount));
    }
	if(m_unit_isSet){
        obj.insert(QString("unit"), ::OpenAPI::toJsonValue(unit));
    }
	if(m_unit_short_isSet){
        obj.insert(QString("unitShort"), ::OpenAPI::toJsonValue(unit_short));
    }
	if(m_unit_long_isSet){
        obj.insert(QString("unitLong"), ::OpenAPI::toJsonValue(unit_long));
    }
	
    if(possible_units.size() > 0){
        obj.insert(QString("possibleUnits"), ::OpenAPI::toJsonValue(possible_units));
    } 
	if(estimated_cost.isSet()){
        obj.insert(QString("estimatedCost"), ::OpenAPI::toJsonValue(estimated_cost));
    }
	if(m_consistency_isSet){
        obj.insert(QString("consistency"), ::OpenAPI::toJsonValue(consistency));
    }
	if(m_aisle_isSet){
        obj.insert(QString("aisle"), ::OpenAPI::toJsonValue(aisle));
    }
	if(m_image_isSet){
        obj.insert(QString("image"), ::OpenAPI::toJsonValue(image));
    }
	
    if(meta.size() > 0){
        obj.insert(QString("meta"), ::OpenAPI::toJsonValue(meta));
    } 
	if(nutrition.isSet()){
        obj.insert(QString("nutrition"), ::OpenAPI::toJsonValue(nutrition));
    }
    return obj;
}


qint32
OAIInline_response_200_20::getId() const {
    return id;
}
void
OAIInline_response_200_20::setId(const qint32 &id) {
    this->id = id;
    this->m_id_isSet = true;
}


QString
OAIInline_response_200_20::getOriginal() const {
    return original;
}
void
OAIInline_response_200_20::setOriginal(const QString &original) {
    this->original = original;
    this->m_original_isSet = true;
}


QString
OAIInline_response_200_20::getOriginalName() const {
    return original_name;
}
void
OAIInline_response_200_20::setOriginalName(const QString &original_name) {
    this->original_name = original_name;
    this->m_original_name_isSet = true;
}


QString
OAIInline_response_200_20::getName() const {
    return name;
}
void
OAIInline_response_200_20::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}


QString
OAIInline_response_200_20::getNameClean() const {
    return name_clean;
}
void
OAIInline_response_200_20::setNameClean(const QString &name_clean) {
    this->name_clean = name_clean;
    this->m_name_clean_isSet = true;
}


OAINumber
OAIInline_response_200_20::getAmount() const {
    return amount;
}
void
OAIInline_response_200_20::setAmount(const OAINumber &amount) {
    this->amount = amount;
    this->m_amount_isSet = true;
}


QString
OAIInline_response_200_20::getUnit() const {
    return unit;
}
void
OAIInline_response_200_20::setUnit(const QString &unit) {
    this->unit = unit;
    this->m_unit_isSet = true;
}


QString
OAIInline_response_200_20::getUnitShort() const {
    return unit_short;
}
void
OAIInline_response_200_20::setUnitShort(const QString &unit_short) {
    this->unit_short = unit_short;
    this->m_unit_short_isSet = true;
}


QString
OAIInline_response_200_20::getUnitLong() const {
    return unit_long;
}
void
OAIInline_response_200_20::setUnitLong(const QString &unit_long) {
    this->unit_long = unit_long;
    this->m_unit_long_isSet = true;
}


QList<QString>
OAIInline_response_200_20::getPossibleUnits() const {
    return possible_units;
}
void
OAIInline_response_200_20::setPossibleUnits(const QList<QString> &possible_units) {
    this->possible_units = possible_units;
    this->m_possible_units_isSet = true;
}


OAI_recipes_parseIngredients_estimatedCost
OAIInline_response_200_20::getEstimatedCost() const {
    return estimated_cost;
}
void
OAIInline_response_200_20::setEstimatedCost(const OAI_recipes_parseIngredients_estimatedCost &estimated_cost) {
    this->estimated_cost = estimated_cost;
    this->m_estimated_cost_isSet = true;
}


QString
OAIInline_response_200_20::getConsistency() const {
    return consistency;
}
void
OAIInline_response_200_20::setConsistency(const QString &consistency) {
    this->consistency = consistency;
    this->m_consistency_isSet = true;
}


QString
OAIInline_response_200_20::getAisle() const {
    return aisle;
}
void
OAIInline_response_200_20::setAisle(const QString &aisle) {
    this->aisle = aisle;
    this->m_aisle_isSet = true;
}


QString
OAIInline_response_200_20::getImage() const {
    return image;
}
void
OAIInline_response_200_20::setImage(const QString &image) {
    this->image = image;
    this->m_image_isSet = true;
}


QList<QString>
OAIInline_response_200_20::getMeta() const {
    return meta;
}
void
OAIInline_response_200_20::setMeta(const QList<QString> &meta) {
    this->meta = meta;
    this->m_meta_isSet = true;
}


OAI_recipes_parseIngredients_nutrition
OAIInline_response_200_20::getNutrition() const {
    return nutrition;
}
void
OAIInline_response_200_20::setNutrition(const OAI_recipes_parseIngredients_nutrition &nutrition) {
    this->nutrition = nutrition;
    this->m_nutrition_isSet = true;
}

bool
OAIInline_response_200_20::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_original_isSet){ isObjectUpdated = true; break;}
    
        if(m_original_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_name_clean_isSet){ isObjectUpdated = true; break;}
    
        if(amount.isSet()){ isObjectUpdated = true; break;}
    
        if(m_unit_isSet){ isObjectUpdated = true; break;}
    
        if(m_unit_short_isSet){ isObjectUpdated = true; break;}
    
        if(m_unit_long_isSet){ isObjectUpdated = true; break;}
    
        if(possible_units.size() > 0){ isObjectUpdated = true; break;}
    
        if(estimated_cost.isSet()){ isObjectUpdated = true; break;}
    
        if(m_consistency_isSet){ isObjectUpdated = true; break;}
    
        if(m_aisle_isSet){ isObjectUpdated = true; break;}
    
        if(m_image_isSet){ isObjectUpdated = true; break;}
    
        if(meta.size() > 0){ isObjectUpdated = true; break;}
    
        if(nutrition.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_20::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_original_isValid && m_original_name_isValid && m_name_isValid && m_name_clean_isValid && m_amount_isValid && m_unit_isValid && m_unit_short_isValid && m_unit_long_isValid && m_possible_units_isValid && m_estimated_cost_isValid && m_consistency_isValid && m_aisle_isValid && m_image_isValid && m_meta_isValid && m_nutrition_isValid && true;
}

}
