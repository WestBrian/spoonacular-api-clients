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


#include "OAIInline_response_200_23_ingredients.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_23_ingredients::OAIInline_response_200_23_ingredients(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_23_ingredients::OAIInline_response_200_23_ingredients() {
    this->init();
}

OAIInline_response_200_23_ingredients::~OAIInline_response_200_23_ingredients() {

}

void
OAIInline_response_200_23_ingredients::init() {
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_original_isSet = false;
    m_original_isValid = false;
    
    m_glycemic_index_isSet = false;
    m_glycemic_index_isValid = false;
    
    m_glycemic_load_isSet = false;
    m_glycemic_load_isValid = false;
    }

void
OAIInline_response_200_23_ingredients::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_23_ingredients::fromJsonObject(QJsonObject json) {
    
    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    
    m_original_isValid = ::OpenAPI::fromJsonValue(original, json[QString("original")]);
    
    
    m_glycemic_index_isValid = ::OpenAPI::fromJsonValue(glycemic_index, json[QString("glycemicIndex")]);
    
    
    m_glycemic_load_isValid = ::OpenAPI::fromJsonValue(glycemic_load, json[QString("glycemicLoad")]);
    
    
}

QString
OAIInline_response_200_23_ingredients::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_23_ingredients::asJsonObject() const {
    QJsonObject obj;
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_original_isSet){
        obj.insert(QString("original"), ::OpenAPI::toJsonValue(original));
    }
	if(glycemic_index.isSet()){
        obj.insert(QString("glycemicIndex"), ::OpenAPI::toJsonValue(glycemic_index));
    }
	if(glycemic_load.isSet()){
        obj.insert(QString("glycemicLoad"), ::OpenAPI::toJsonValue(glycemic_load));
    }
    return obj;
}


qint32
OAIInline_response_200_23_ingredients::getId() const {
    return id;
}
void
OAIInline_response_200_23_ingredients::setId(const qint32 &id) {
    this->id = id;
    this->m_id_isSet = true;
}


QString
OAIInline_response_200_23_ingredients::getOriginal() const {
    return original;
}
void
OAIInline_response_200_23_ingredients::setOriginal(const QString &original) {
    this->original = original;
    this->m_original_isSet = true;
}


OAINumber
OAIInline_response_200_23_ingredients::getGlycemicIndex() const {
    return glycemic_index;
}
void
OAIInline_response_200_23_ingredients::setGlycemicIndex(const OAINumber &glycemic_index) {
    this->glycemic_index = glycemic_index;
    this->m_glycemic_index_isSet = true;
}


OAINumber
OAIInline_response_200_23_ingredients::getGlycemicLoad() const {
    return glycemic_load;
}
void
OAIInline_response_200_23_ingredients::setGlycemicLoad(const OAINumber &glycemic_load) {
    this->glycemic_load = glycemic_load;
    this->m_glycemic_load_isSet = true;
}

bool
OAIInline_response_200_23_ingredients::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_original_isSet){ isObjectUpdated = true; break;}
    
        if(glycemic_index.isSet()){ isObjectUpdated = true; break;}
    
        if(glycemic_load.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_23_ingredients::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_original_isValid && m_glycemic_index_isValid && m_glycemic_load_isValid && true;
}

}
